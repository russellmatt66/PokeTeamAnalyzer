# Overview
PokeTeamAnalyzer analyzes a specified team of pokemon, and gives a breakdown of the teams strengths and weaknesses. 

Pokemon is a popular video game published by Nintendo. In the game, trainers carry around teams of up to six "Pokemon" in order to battle other trainers and determine who is the strongest. Pokemon are characters which can have one of 324 possible type combinations, and carry four moves each of which has a single type value. There are other basic characteristics of a pokemon, but these suffice for the purposes of analyzing the type strengths and weaknesses of a team. 

# TODO
- Write main driver
- Write driver for validating the Adjacency Matrix of the single-type matchups.
- Create Adjacency Matrix for the double-type matchups.
- Write CMakeLists.txt

# The Mathematics of Pokemon
There are 1,533,615,896,736 unique combinations of full team, by typing, that one can theoretically construct. Each of the six pokemon on this team can have four mono-typed moves. There 18 possible types for each of these four moves to have, and they do not interfere with each other, i.e., a single pokemon could all be Fire, Water, etc... In the most general case then, there are 18^24 possible configurations for the typing of these moves. Not all of these are physically realizable in the 1021 Pokemon currently implemented by Game Freak, and for that matter not all of the possible type combinations have been implemented, but the number is a good reference to calculate for the following reason:

18^24 = 1,338,258,845,052,394,702,439,737,982,976 $\approx$ 1.338 × 10^30

That's a LOT of permutations. 

There are approximately 3.14 × 10^7 seconds in a year. SHOW HOW THIS IS IMPOSSIBLE TO BRUTEFORCE. 

Granted, this is also an overestimation of the problem size. Not every pokemon can learn a damaging move of every type, but getting exact data for how varied a given pokemon's learnset is in this sense would require writing a webscraper for Serebii. That is an interesting project, and the answer is that it would surely be much smaller than 10^30, but the real question is: "would it be small enough to bruteforce?"

Furthermore, a pokemon team is not a static entity during a battle. Pokemon faint, and with terastallization, they can also change their type (which I hate the idea of). Dynamic events like these disrupt the configuration of a team, and necessitate a re-analyzing of the new structure. Leaving terastallization aside for the moment, because it's a nightmare to deal with mathematically, and given 6 pokemon on a team, there are 6! different possible "fainting sequences", i.e., unique orders in which the pokemon can faint. Below is the breakdown of the combinatorics,

When no pokemon have fainted, there is 1 possible 6-tuple which describes the team's configuration.
When 1 pokemon has fainted, there are 6 possible 5-tuples which describe the team's new configuration.
When 2 pokemon have fainted, there are 6*5 = 30 possible 4-tuples " " " " " ".
When 3 pokemon have fainted, there are 6*5*4 = 120 possible 3-tuples " " " " " ".
when 4 pokemon have fainted, there are 6*5*4*3 = 360 possible 2-tuples " " " " " ".
When 5 pokemon have fainted, there are 6 possible 1-tuples (a single pokemon) which describe the team's new configuration.

This is an important matter to consider, because the way in which your team responds to the death of a member, or handful of members, constitutes the basis for its stability. It also gives insight into the key members of a team.  

Understanding the flow between these states during the course of a battle is best done with the tools of graph theory. The size of a graph describing a pokemon battle is bounded by the amount of PP that the pokemon's moves have, but determining the exact size is no mean feat, and one that requires assumptions to be made about the decisions the pokemon make. 
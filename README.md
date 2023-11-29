# Overview
PokeTeamAnalyzer analyzes a specified team of pokemon, and gives a breakdown of the teams strengths and weaknesses. 

Pokemon is a popular video game published by Nintendo. In the game, trainers carry around teams of up to six "Pokemon" in order to battle other trainers and determine who is the strongest. Pokemon are characters which can have one of 324 possible type combinations,   

# TODO
- 

# Roadmap
There are 1,533,615,896,736 unique combinations of full team, by typing, that one can theoretically construct. Each of the six pokemon on this team can have four mono-typed moves. There 18 possible types for each of these four moves to have, and they do not interfere with each other, i.e., a single pokemon could all be Fire, Water, etc... In the most general case then, there are 18^24 possible configurations for the typing of these moves. Not all of these are physically realizable in the 1021 Pokemon currently implemented by Game Freak, and for that matter not all of the possible type combinations have been implemented, but the number is a good reference to calculate for the following reason:

18^24 = 1,338,258,845,052,394,702,439,737,982,976 $\approx$ 1.338 × 10^30

That's a LOT of permutations. 

There are approximately 3.14 × 10^7 seconds in a year. 
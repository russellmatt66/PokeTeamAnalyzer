/* 
CUDA code to find perfect and imperfect triangles for dual-types. 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Why does a GPU need to be used for this? 
Mathematical Theory:
~~~~~~~~~~~~~~~~~~~~
There are 18 mono-types in Pokemon. They are enumerated, and their damage relationships implemented in "../include/SusceptGraph.hpp" 

Each of these 18 mono-types has 17 possible mono-types that it can be paired with, giving 18*17 = 306 possible dual-types. 

Together, there are 18 + 306 = 324 possible type combinations that a Pokemon can have. 

However, type combinations are associative, i.e., dual-type AB is basically the same as dual-type BA.

Therefore, there are 18 + 306 / 2 = 18 + 153 = 171 unique possible type combinations that a pokemon can have.  

This order-of-magnitude increase in the number of types significantly increases the complexity of the problem, and the additional structure from the secondary 
type requires that a second look be taken at exactly *what* we are searching for. 

We want to find "perfect", and "imperfect", triangles amongst the possible dual-types.
*/
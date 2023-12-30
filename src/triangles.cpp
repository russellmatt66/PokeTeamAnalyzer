/* Enumerate the perfect and imperfect triangles amongst mono- and dual-type combinations */

#include <fstream>

#include "../include/SusceptGraph.hpp"
#include "../include/Pokemon.hpp"

// Search and helper functions
void FindTrianglesMono(std::ofstream&, const DamageGraph);
bool IsPerfectTriangleMono(const DamageGraph, const MonoTypeValue, const MonoTypeValue, const MonoTypeValue);
bool IsImperfectTriangleMono(const DamageGraph, const MonoTypeValue, const MonoTypeValue, const MonoTypeValue);
void FindTrianglesDual(std::ofstream&, const DamageGraph); 
bool IsPerfectTriangleDual(const DamageGraph);
bool IsPerfectTrianglesDualTypeWise(const DamageGraph);

int main(){
    std::ofstream perfect_tri_MT; // MT = monotype
    perfect_tri_MT.open("../output/triangles/perfect_tri_MT.txt");

    /* FindPerfectTrianglesMono */

    return 0;
}

// A perfect triangle is a 3-tuple of types (i,j,k) that possess the following relationships:
// A_{ij} = 2.0
// A_{jk} = 2.0
// A_{ki} = 2.0
// A_{ji} = 0.5
// A_{kj} = 0.5
// A_{ik} = 0.5
void FindTrianglesMono(std::ofstream& outputfile, const DamageGraph AdjMat){
    /* Enumerate all the 3-tuples of MonoTypeValues and determine whether they constitute a perfect triangle or not */  

    /* Determine whether they constitute an imperfect triangle or not */

    /* Stream valid 3-tuples to outputfile, along with whether they are perfect or imperfect */
}

// Check whether a 3-tuple of types is a perfect triangle
bool IsPerfectTriangleMono(const DamageGraph AdjMat, const MonoTypeValue TypeA, const MonoTypeValue TypeB, const MonoTypeValue TypeC){
    /* Convert MonoTypeValues to indicial values and then use AdjMat to determine whether they constitute a perfect triangle */  
}

// An imperfect triangle is a 3-tuple of types that possess the same triangle of SE relationships as a perfect triangle, but lacks the NVE triangle
// SE = super effective
// NVE = not very effective  
bool IsImperfectTriangleMono(const DamageGraph, const MonoTypeValue TypeA, const MonoTypeValue TypeB, const MonoTypeValue TypeC){
    /* Convert MonoTypeValues to indicial values and then use AdjMat to determine whether they constitute an imperfect triangle */  
}
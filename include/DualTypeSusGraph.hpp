/* Use SusceptGraph::DamageGraph to create dual-type susceptibility graph */
#include <vector>

#include "SusceptGraph.hpp"
#include "Pokemon.hpp"

class DualDamageGraph{
    public:
        // N = "number of monotypes" 
        DualDamageGraph(const DamageGraph MonoDamGraph, const size_t N) : AdjMat_(N * N, std::vector<float>(N, 0.0)) 
        {
            /* Initialize Adjacency Matrix */
            // Some questions:
            // (1) How are the dual-types to be ordered?
            // -> If "i mod 18 = 0", then that is a monotype
            // -> Use the monotype ordering from "../include/SusceptGraph.hpp"
            // -> Assign the dual-types based on the above
            // (2) How to deal with the dual-types which are functionally the same, e.g., fighting-normal and normal-fighting? 
            // -> It's extraneous computation to keep them around, but simpler than coming up with some clever, and possibly error-prone way of constructing
            //    the graph uniquely. 
            for (size_t i = 0; i < AdjMat_.size(); i++){
                /* Initialize Adjacency Matrix */
            }
        }

        /* Given a row, return the dual-type that it corresponds to */
        const std::string DualTypeKeyString(size_t i){
            return "monke";
        }

        // "dual-type i takes AdjMat_[i][j] times damage from mono-type j"
        // "mono-type j deal AdjMat_[i][j] times damage to dual-type i"
        // This is the main function that will be called many times when analyzing a team's strengths and weaknesses.
        const float DamageMult(size_t i, size_t j) const { return AdjMat_[i][j]; }

    private:
        std::vector<std::vector<float>> AdjMat_;
};
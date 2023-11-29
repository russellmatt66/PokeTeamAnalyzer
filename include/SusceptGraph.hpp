#include <vector>

class DamageGraph{
    public:
        DamageGraph() : AdjMat_(18, std::vector<float>(18, 0))
        {
            // Need to hard code haha, see Key below class definition
            // Use @3:35 from: https://www.youtube.com/watch?v=RBkRQ2vVsOA
            // Normal - 0
            AdjMat_[0][0] = 1.0;
            AdjMat_[0][1] = 1.0;
            AdjMat_[0][2] = 1.0;
            AdjMat_[0][3] = 1.0;
            AdjMat_[0][4] = 1.0;
            AdjMat_[0][5] = 0.5;
            AdjMat_[0][6] = 1.0;
            AdjMat_[0][7] = 0.0;
            AdjMat_[0][8] = 0.5;
            AdjMat_[0][9] = 1.0;
            AdjMat_[0][10] = 1.0;
            AdjMat_[0][11] = 1.0;
            AdjMat_[0][12] = 1.0;
            AdjMat_[0][13] = 1.0;
            AdjMat_[0][14] = 1.0;
            AdjMat_[0][15] = 1.0;
            AdjMat_[0][16] = 1.0;
            AdjMat_[0][17] = 1.0;
            
            // Fighting - 1
            AdjMat_[1][0] = 2.0;
            AdjMat_[1][1] = 1.0;
            AdjMat_[1][2] = 0.5;
            AdjMat_[1][3] = 0.5;
            AdjMat_[1][4] = 1.0;
            AdjMat_[1][5] = 2.0;
            AdjMat_[1][6] = 0.5;
            AdjMat_[1][7] = 0.0;
            AdjMat_[1][8] = 2.0;
            AdjMat_[1][9] = 1.0;
            AdjMat_[1][10] = 1.0;
            AdjMat_[1][11] = 1.0;
            AdjMat_[1][12] = 1.0;
            AdjMat_[1][13] = 0.5;
            AdjMat_[1][14] = 2.0;
            AdjMat_[1][15] = 1.0;
            AdjMat_[1][16] = 2.0;
            AdjMat_[1][17] = 0.5;
        }

        // "type i deals AdjMat_[i][j] times damage to type j"
        // "type j takes AdjMat_[i][j] times damage from type i"
        const float DamageMult(size_t i, size_t j) const { return AdjMat_[i][j]; }
    
    private:
        std::vector<std::vector<float>> AdjMat_;
};
/*
Key:
0 - Normal
1 - Fighting
2 - Flying
3 - Poison
4 - Ground
5 - Rock
6 - Bug
7 - Ghost
8 - Steel
9 - Fire
10 - Water
11 - Grass
12 - Electric
13 - Psychic
14 - Ice
15 - Dragon
16 - Dark
17 - Fairy
*/
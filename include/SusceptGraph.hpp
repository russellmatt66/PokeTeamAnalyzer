#include <vector>
#include <string>
class DamageGraph{
    public:
        DamageGraph() : AdjMat_(18, std::vector<float>(18, 0))
        {
            // Need to hard code haha, see Key below class definition
            // Use @3:35 from: https://www.youtube.com/watch?v=RBkRQ2vVsOA
            // "type i deals AdjMat_[i][j] times damage to type j"
            // "type j takes AdjMat_[i][j] times damage from type i"    
            
            // Normal - 0 
            // [O]
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
            // [O]
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

            // Flying - 2
            // [O]
            AdjMat_[2][0] = 1.0;
            AdjMat_[2][1] = 2.0;
            AdjMat_[2][2] = 1.0;
            AdjMat_[2][3] = 1.0;
            AdjMat_[2][4] = 1.0;
            AdjMat_[2][5] = 0.5;
            AdjMat_[2][6] = 2.0;
            AdjMat_[2][7] = 1.0;
            AdjMat_[2][8] = 0.5;
            AdjMat_[2][9] = 1.0;
            AdjMat_[2][10] = 1.0;
            AdjMat_[2][11] = 2.0;
            AdjMat_[2][12] = 0.5;
            AdjMat_[2][13] = 1.0;
            AdjMat_[2][14] = 1.0;
            AdjMat_[2][15] = 1.0;
            AdjMat_[2][16] = 1.0;
            AdjMat_[2][17] = 1.0;

            // Poison - 3
            // [O]
            AdjMat_[3][0] = 1.0;
            AdjMat_[3][1] = 1.0;
            AdjMat_[3][2] = 1.0;
            AdjMat_[3][3] = 0.5;
            AdjMat_[3][4] = 0.5;
            AdjMat_[3][5] = 0.5;
            AdjMat_[3][6] = 1.0;
            AdjMat_[3][7] = 0.5;
            AdjMat_[3][8] = 0.0;
            AdjMat_[3][9] = 1.0;
            AdjMat_[3][10] = 1.0;
            AdjMat_[3][11] = 2.0;
            AdjMat_[3][12] = 1.0;
            AdjMat_[3][13] = 1.0;
            AdjMat_[3][14] = 1.0;
            AdjMat_[3][15] = 1.0;
            AdjMat_[3][16] = 1.0;
            AdjMat_[3][17] = 2.0;

            // Ground - 4
            // []
            AdjMat_[4][0] = 2.0; // Start here
            AdjMat_[4][1] = 1.0;
            AdjMat_[4][2] = 0.5;
            AdjMat_[4][3] = 0.5;
            AdjMat_[4][4] = 1.0;
            AdjMat_[4][5] = 2.0;
            AdjMat_[4][6] = 0.5;
            AdjMat_[4][7] = 0.0;
            AdjMat_[4][8] = 2.0;
            AdjMat_[4][9] = 1.0;
            AdjMat_[4][10] = 1.0;
            AdjMat_[4][11] = 1.0;
            AdjMat_[4][12] = 1.0;
            AdjMat_[4][13] = 0.5;
            AdjMat_[4][14] = 2.0;
            AdjMat_[4][15] = 1.0;
            AdjMat_[4][16] = 2.0;
            AdjMat_[4][17] = 0.5;

            // Rock - 5
            // []
            AdjMat_[5][0] = 2.0;
            AdjMat_[5][1] = 1.0;
            AdjMat_[5][2] = 0.5;
            AdjMat_[5][3] = 0.5;
            AdjMat_[5][4] = 1.0;
            AdjMat_[5][5] = 2.0;
            AdjMat_[5][6] = 0.5;
            AdjMat_[5][7] = 0.0;
            AdjMat_[5][8] = 2.0;
            AdjMat_[5][9] = 1.0;
            AdjMat_[5][10] = 1.0;
            AdjMat_[5][11] = 1.0;
            AdjMat_[5][12] = 1.0;
            AdjMat_[5][13] = 0.5;
            AdjMat_[5][14] = 2.0;
            AdjMat_[5][15] = 1.0;
            AdjMat_[5][16] = 2.0;
            AdjMat_[5][17] = 0.5;

            // Bug - 6
            // []
            AdjMat_[6][0] = 2.0;
            AdjMat_[6][1] = 1.0;
            AdjMat_[6][2] = 0.5;
            AdjMat_[6][3] = 0.5;
            AdjMat_[6][4] = 1.0;
            AdjMat_[6][5] = 2.0;
            AdjMat_[6][6] = 0.5;
            AdjMat_[6][7] = 0.0;
            AdjMat_[6][8] = 2.0;
            AdjMat_[6][9] = 1.0;
            AdjMat_[6][10] = 1.0;
            AdjMat_[6][11] = 1.0;
            AdjMat_[6][12] = 1.0;
            AdjMat_[6][13] = 0.5;
            AdjMat_[6][14] = 2.0;
            AdjMat_[6][15] = 1.0;
            AdjMat_[6][16] = 2.0;
            AdjMat_[6][17] = 0.5;
            
            // Ghost - 7
            // []
            AdjMat_[7][0] = 2.0;
            AdjMat_[7][1] = 1.0;
            AdjMat_[7][2] = 0.5;
            AdjMat_[7][3] = 0.5;
            AdjMat_[7][4] = 1.0;
            AdjMat_[7][5] = 2.0;
            AdjMat_[7][6] = 0.5;
            AdjMat_[7][7] = 0.0;
            AdjMat_[7][8] = 2.0;
            AdjMat_[7][9] = 1.0;
            AdjMat_[7][10] = 1.0;
            AdjMat_[7][11] = 1.0;
            AdjMat_[7][12] = 1.0;
            AdjMat_[7][13] = 0.5;
            AdjMat_[7][14] = 2.0;
            AdjMat_[7][15] = 1.0;
            AdjMat_[7][16] = 2.0;
            AdjMat_[7][17] = 0.5;

            // Steel - 8
            // []
            AdjMat_[8][0] = 2.0;
            AdjMat_[8][1] = 1.0;
            AdjMat_[8][2] = 0.5;
            AdjMat_[8][3] = 0.5;
            AdjMat_[8][4] = 1.0;
            AdjMat_[8][5] = 2.0;
            AdjMat_[8][6] = 0.5;
            AdjMat_[8][7] = 0.0;
            AdjMat_[8][8] = 2.0;
            AdjMat_[8][9] = 1.0;
            AdjMat_[8][10] = 1.0;
            AdjMat_[8][11] = 1.0;
            AdjMat_[8][12] = 1.0;
            AdjMat_[8][13] = 0.5;
            AdjMat_[8][14] = 2.0;
            AdjMat_[8][15] = 1.0;
            AdjMat_[8][16] = 2.0;
            AdjMat_[8][17] = 0.5;
            
            // Fire - 9
            // []
            AdjMat_[9][0] = 2.0;
            AdjMat_[9][1] = 1.0;
            AdjMat_[9][2] = 0.5;
            AdjMat_[9][3] = 0.5;
            AdjMat_[9][4] = 1.0;
            AdjMat_[9][5] = 2.0;
            AdjMat_[9][6] = 0.5;
            AdjMat_[9][7] = 0.0;
            AdjMat_[9][8] = 2.0;
            AdjMat_[9][9] = 1.0;
            AdjMat_[9][10] = 1.0;
            AdjMat_[9][11] = 1.0;
            AdjMat_[9][12] = 1.0;
            AdjMat_[9][13] = 0.5;
            AdjMat_[9][14] = 2.0;
            AdjMat_[9][15] = 1.0;
            AdjMat_[9][16] = 2.0;
            AdjMat_[9][17] = 0.5;

            // Water - 10
            // []
            AdjMat_[10][0] = 2.0;
            AdjMat_[10][1] = 1.0;
            AdjMat_[10][2] = 0.5;
            AdjMat_[10][3] = 0.5;
            AdjMat_[10][4] = 1.0;
            AdjMat_[10][5] = 2.0;
            AdjMat_[10][6] = 0.5;
            AdjMat_[10][7] = 0.0;
            AdjMat_[10][8] = 2.0;
            AdjMat_[10][9] = 1.0;
            AdjMat_[10][10] = 1.0;
            AdjMat_[10][11] = 1.0;
            AdjMat_[10][12] = 1.0;
            AdjMat_[10][13] = 0.5;
            AdjMat_[10][14] = 2.0;
            AdjMat_[10][15] = 1.0;
            AdjMat_[10][16] = 2.0;
            AdjMat_[10][17] = 0.5;

            // Grass - 11
            // []
            AdjMat_[11][0] = 2.0;
            AdjMat_[11][1] = 1.0;
            AdjMat_[11][2] = 0.5;
            AdjMat_[11][3] = 0.5;
            AdjMat_[11][4] = 1.0;
            AdjMat_[11][5] = 2.0;
            AdjMat_[11][6] = 0.5;
            AdjMat_[11][7] = 0.0;
            AdjMat_[11][8] = 2.0;
            AdjMat_[11][9] = 1.0;
            AdjMat_[11][10] = 1.0;
            AdjMat_[11][11] = 1.0;
            AdjMat_[11][12] = 1.0;
            AdjMat_[11][13] = 0.5;
            AdjMat_[11][14] = 2.0;
            AdjMat_[11][15] = 1.0;
            AdjMat_[11][16] = 2.0;
            AdjMat_[11][17] = 0.5;

            // Electric - 12
            // []
            AdjMat_[12][0] = 2.0;
            AdjMat_[12][1] = 1.0;
            AdjMat_[12][2] = 0.5;
            AdjMat_[12][3] = 0.5;
            AdjMat_[12][4] = 1.0;
            AdjMat_[12][5] = 2.0;
            AdjMat_[12][6] = 0.5;
            AdjMat_[12][7] = 0.0;
            AdjMat_[12][8] = 2.0;
            AdjMat_[12][9] = 1.0;
            AdjMat_[12][10] = 1.0;
            AdjMat_[12][11] = 1.0;
            AdjMat_[12][12] = 1.0;
            AdjMat_[12][13] = 0.5;
            AdjMat_[12][14] = 2.0;
            AdjMat_[12][15] = 1.0;
            AdjMat_[12][16] = 2.0;
            AdjMat_[12][17] = 0.5;
            
            // Psychic - 13
            // []
            AdjMat_[13][0] = 2.0;
            AdjMat_[13][1] = 1.0;
            AdjMat_[13][2] = 0.5;
            AdjMat_[13][3] = 0.5;
            AdjMat_[13][4] = 1.0;
            AdjMat_[13][5] = 2.0;
            AdjMat_[13][6] = 0.5;
            AdjMat_[13][7] = 0.0;
            AdjMat_[13][8] = 2.0;
            AdjMat_[13][9] = 1.0;
            AdjMat_[13][10] = 1.0;
            AdjMat_[13][11] = 1.0;
            AdjMat_[13][12] = 1.0;
            AdjMat_[13][13] = 0.5;
            AdjMat_[13][14] = 2.0;
            AdjMat_[13][15] = 1.0;
            AdjMat_[13][16] = 2.0;
            AdjMat_[13][17] = 0.5;

            // Ice - 14
            // []
            AdjMat_[14][0] = 2.0;
            AdjMat_[14][1] = 1.0;
            AdjMat_[14][2] = 0.5;
            AdjMat_[14][3] = 0.5;
            AdjMat_[14][4] = 1.0;
            AdjMat_[14][5] = 2.0;
            AdjMat_[14][6] = 0.5;
            AdjMat_[14][7] = 0.0;
            AdjMat_[14][8] = 2.0;
            AdjMat_[14][9] = 1.0;
            AdjMat_[14][10] = 1.0;
            AdjMat_[14][11] = 1.0;
            AdjMat_[14][12] = 1.0;
            AdjMat_[14][13] = 0.5;
            AdjMat_[14][14] = 2.0;
            AdjMat_[14][15] = 1.0;
            AdjMat_[14][16] = 2.0;
            AdjMat_[14][17] = 0.5;

            // Dragon - 15
            // []
            AdjMat_[15][0] = 2.0;
            AdjMat_[15][1] = 1.0;
            AdjMat_[15][2] = 0.5;
            AdjMat_[15][3] = 0.5;
            AdjMat_[15][4] = 1.0;
            AdjMat_[15][5] = 2.0;
            AdjMat_[15][6] = 0.5;
            AdjMat_[15][7] = 0.0;
            AdjMat_[15][8] = 2.0;
            AdjMat_[15][9] = 1.0;
            AdjMat_[15][10] = 1.0;
            AdjMat_[15][11] = 1.0;
            AdjMat_[15][12] = 1.0;
            AdjMat_[15][13] = 0.5;
            AdjMat_[15][14] = 2.0;
            AdjMat_[15][15] = 1.0;
            AdjMat_[15][16] = 2.0;
            AdjMat_[15][17] = 0.5;

            // Dark - 16
            // []
            AdjMat_[16][0] = 2.0;
            AdjMat_[16][1] = 1.0;
            AdjMat_[16][2] = 0.5;
            AdjMat_[16][3] = 0.5;
            AdjMat_[16][4] = 1.0;
            AdjMat_[16][5] = 2.0;
            AdjMat_[16][6] = 0.5;
            AdjMat_[16][7] = 0.0;
            AdjMat_[16][8] = 2.0;
            AdjMat_[16][9] = 1.0;
            AdjMat_[16][10] = 1.0;
            AdjMat_[16][11] = 1.0;
            AdjMat_[16][12] = 1.0;
            AdjMat_[16][13] = 0.5;
            AdjMat_[16][14] = 2.0;
            AdjMat_[16][15] = 1.0;
            AdjMat_[16][16] = 2.0;
            AdjMat_[16][17] = 0.5;

            // Fairy - 17
            // []
            AdjMat_[17][0] = 2.0;
            AdjMat_[17][1] = 1.0;
            AdjMat_[17][2] = 0.5;
            AdjMat_[17][3] = 0.5;
            AdjMat_[17][4] = 1.0;
            AdjMat_[17][5] = 2.0;
            AdjMat_[17][6] = 0.5;
            AdjMat_[17][7] = 0.0;
            AdjMat_[17][8] = 2.0;
            AdjMat_[17][9] = 1.0;
            AdjMat_[17][10] = 1.0;
            AdjMat_[17][11] = 1.0;
            AdjMat_[17][12] = 1.0;
            AdjMat_[17][13] = 0.5;
            AdjMat_[17][14] = 2.0;
            AdjMat_[17][15] = 1.0;
            AdjMat_[17][16] = 2.0;
            AdjMat_[17][17] = 0.5;
        }

        // "type i deals AdjMat_[i][j] times damage to type j"
        // "type j takes AdjMat_[i][j] times damage from type i"
        const float DamageMult(size_t i, size_t j) const { return AdjMat_[i][j]; }
    
        const std::string TypeOutcome(size_t i, size_t j) {
            /* Implement function that returns a string describing the outcome of using type i on type j */
        }

        void Validate(){
            for (size_t i = 0; i < AdjMat_.size(); i++){
                for (size_t j = 0; j < AdjMat_[i].size(); j++){
                    /* Call TypeOutcome and print result */
                }
            }
        }

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
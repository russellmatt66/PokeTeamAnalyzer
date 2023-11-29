/* 
Pokemon class
*/

#include <vector>
#include <string>

enum class MonoTypeValue{
    Fire,
    Water,
    Grass,
    Normal,
    Dark,
    Ghost,
    Dragon,
    Ice,
    Rock,
    Steel,
    Fairy,
    Fighting,
    Flying,
    Ground,
    Electric,
    Poison,
    Psychic,
    Bug,
    None
};

struct PokemonType{
    MonoTypeValue primaryType;
    MonoTypeValue secondaryType;
};

// This class is here to associate a pair of ints with the PokemonType, for easy access to the adjacency matrix of the susceptibility graph
class Pokemon{
    public:
        Pokemon(const PokemonType& type) : TypeCombo_(type)
        {}

    private:
        PokemonType TypeCombo_;
};

class Team{
    public:
        
    private:
        std::vector<PokemonType> Roster_;
};
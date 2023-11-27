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
        std::vector<Pokemon> Roster_;
};
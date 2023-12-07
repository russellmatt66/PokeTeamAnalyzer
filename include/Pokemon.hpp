/* 
Pokemon class
*/

#include <vector>
#include <string>
#include <cstddef>

enum class MonoTypeValue{
    Normal,
    Fighting,
    Flying,
    Poison,
    Ground,
    Rock,
    Bug,
    Ghost,
    Steel,
    Fire,
    Water,
    Grass,
    Electric,
    Psychic,
    Ice,
    Dragon,
    Dark,
    Fairy,
    None
};

const MonoTypeValue TypeKeyMTV(size_t i){
    switch (i) {
        case 0: { return MonoTypeValue::Normal; }
        case 1: { return MonoTypeValue::Fighting; }
        case 2: { return MonoTypeValue::Flying; }
        case 3: { return MonoTypeValue::Poison; }
        case 4: { return MonoTypeValue::Ground; }
        case 5: { return MonoTypeValue::Rock; }
        case 6: { return MonoTypeValue::Bug; }
        case 7: { return MonoTypeValue::Ghost; }
        case 8: { return MonoTypeValue::Steel; }
        case 9: { return MonoTypeValue::Fire; }
        case 10: { return MonoTypeValue::Water; }
        case 11: { return MonoTypeValue::Grass; }
        case 12: { return MonoTypeValue::Electric; }
        case 13: { return MonoTypeValue::Psychic; }
        case 14: { return MonoTypeValue::Ice; }
        case 15: { return MonoTypeValue::Dragon; }
        case 16: { return MonoTypeValue::Dark; }
        case 17: { return MonoTypeValue::Fairy; }
        default: 
            return MonoTypeValue::None; 
    }
}

struct PokemonType{
    MonoTypeValue primaryType;
    MonoTypeValue secondaryType;
};

// This is here for future development when I write the Serebii webscraper and use this to solve realistic problems
class Pokemon{
    public:
        Pokemon(const PokemonType& type) : TypeCombo_(type), Moves_(4, MonoTypeValue::None)
        {}

    private:
        PokemonType TypeCombo_;
        std::vector<MonoTypeValue> Moves_;
};

// Not sure if Array of Structs is a good idea, but Pokemon is very small
class Team{
    public:
        
    private:
        std::vector<Pokemon> Roster_;
};
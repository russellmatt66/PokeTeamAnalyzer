#include <cstddef>
#include <map>

#include "../include/Pokemon.hpp"
#include "../include/SusceptGraph.hpp"

// Main Driver
int main(){
    // Initialize map of MTVs with ints
    std::map<MonoTypeValue, size_t> MTVtoInt;
    MTVtoInt[MonoTypeValue::Normal] = 0;
    MTVtoInt[MonoTypeValue::Fighting] = 1;
    MTVtoInt[MonoTypeValue::Flying] = 2;
    MTVtoInt[MonoTypeValue::Poison] = 3;
    MTVtoInt[MonoTypeValue::Ground] = 4;
    MTVtoInt[MonoTypeValue::Rock] = 5;
    MTVtoInt[MonoTypeValue::Bug] = 6;
    MTVtoInt[MonoTypeValue::Ghost] = 7;
    MTVtoInt[MonoTypeValue::Steel] = 8;
    MTVtoInt[MonoTypeValue::Fire] = 9;
    MTVtoInt[MonoTypeValue::Water] = 10;
    MTVtoInt[MonoTypeValue::Grass] = 11;
    MTVtoInt[MonoTypeValue::Electric] = 12;
    MTVtoInt[MonoTypeValue::Psychic] = 13;
    MTVtoInt[MonoTypeValue::Ice] = 14;
    MTVtoInt[MonoTypeValue::Dragon] = 15;
    MTVtoInt[MonoTypeValue::Dark] = 16;
    MTVtoInt[MonoTypeValue::Fairy] = 17;

    /* 
    Read team in from input file 
    */

    /*
    Analyze team's type strengths and weaknesses
    */

   /* 
   Write data out 
   */
}
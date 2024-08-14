#include "Meals.h"

int NormalMeal::getPrice() {
    return _price;
}

const std::string& NormalMeal::getName() {
    return _name;
}

const std::unordered_map<std::pair<MealPowers,PokemonType>,int>& NormalMeal::getMealPowers() {
    return _mealPower;
}

MustardRiceBall::MustardRiceBall() : NormalMeal(){
    _name = "芥末饭团";
    _price = 750;
    _mealPower.emplace(std::make_pair(MealPowers::EncounterPower,PokemonType::Rock),1);
    _mealPower.emplace(std::make_pair(MealPowers::CatchingPower, PokemonType::Ice),1);
    _mealPower.emplace(std::make_pair(MealPowers::HumungoPower,PokemonType::Electric),1);
}

SweetAdzukiBeanSoup::SweetAdzukiBeanSoup() : NormalMeal(){
    _name = "红豆汤";
    _price = 800;
    _mealPower.emplace(std::make_pair(MealPowers::ExpPointPower,PokemonType::Normal),1);
    _mealPower.emplace(std::make_pair(MealPowers::ItemDropPower,PokemonType::Steel),1);
    _mealPower.emplace(std::make_pair(MealPowers::EncounterPower,PokemonType::Poison),1);
}

HomemadeUmeboshi::HomemadeUmeboshi() : NormalMeal(){
    _name = "自家制梅干";
    _price = 500;
    _mealPower.emplace(std::make_pair(MealPowers::TeensyPower,PokemonType::Fire),1);
    _mealPower.emplace(std::make_pair(MealPowers::ExpPointPower,PokemonType::Ghost),1);
    _mealPower.emplace(std::make_pair(MealPowers::EggPower,PokemonType::None),1);
}

BitterMelonStirFry::BitterMelonStirFry() : NormalMeal(){
    _name = "苦瓜杂炒";
    _price = 950;
    _mealPower.emplace(std::make_pair(MealPowers::ItemDropPower,PokemonType::Ground),1);
    _mealPower.emplace(std::make_pair(MealPowers::HumungoPower,PokemonType::Ghost),1);
    _mealPower.emplace(std::make_pair(MealPowers::EncounterPower,PokemonType::Rock),1);
}

SobaNoodleSoup::SobaNoodleSoup() : NormalMeal(){
    _name = "清汤荞麦面";
    _price = 920;
    _mealPower.emplace(std::make_pair(MealPowers::EggPower,PokemonType::None),1);
    _mealPower.emplace(std::make_pair(MealPowers::EncounterPower,PokemonType::Fire),1);
    _mealPower.emplace(std::make_pair(MealPowers::RaidPower,PokemonType::Grass),1);
}

GymMeal::GymMeal(const std::string& name) : _name(name){}

const std::string & GymMeal::getName() {
    return _name;
};


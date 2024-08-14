#ifndef MEALS_H
#define MEALS_H
#include <string>
#include <unordered_map>

enum class MealPowers {
    EggPower,
    CatchingPower,
    ExpPointPower,
    ItemDropPower,
    RaidPower,
    TitlePower,
    SparklingPower,
    HumungoPower,
    TeensyPower,
    EncounterPower,
};

enum class PokemonType {
    Normal,
    Fire,
    Water,
    Electric,
    Grass,
    Ice,
    Fighting,
    Poison,
    Ground,
    Flying,
    Phychic,
    Bug,
    Rock,
    Ghost,
    Dragon,
    Dark,
    Steel,
    Fairy,
    None,
};

class NormalMeal {
public:
    NormalMeal() = default;
    virtual ~NormalMeal() = default;

    virtual int getPrice();
    virtual const std::string& getName();
    virtual const std::unordered_map<std::pair<MealPowers,PokemonType>,int>& getMealPowers();

protected:
    std::unordered_map<std::pair<MealPowers,PokemonType>,int> _mealPower;
    int _price;
    std::string _name;
};

class MustardRiceBall : public NormalMeal {
public:
    MustardRiceBall();
};
class SweetAdzukiBeanSoup : public NormalMeal {
public:
    SweetAdzukiBeanSoup();
};

class HomemadeUmeboshi : public NormalMeal {
public:
    HomemadeUmeboshi();
};

class BitterMelonStirFry : public NormalMeal {
public:
    BitterMelonStirFry();
};

class SobaNoodleSoup : public NormalMeal {
public:
    SobaNoodleSoup();
};

class GymMeal {
public:
    explicit GymMeal(const std::string& name&);
    ~GymMeal() = default;
    const std::string& getName();

private:
    std::string _name;

};


#endif //MEALS_H

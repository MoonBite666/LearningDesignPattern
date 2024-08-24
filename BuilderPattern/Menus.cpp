#include "Menus.h"

#include <codecvt>

#include "Meals.h"
#include <iostream>
#include <locale>

std::wstring stringToWstring(const std::string& str) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    return converter.from_bytes(str);
}

std::string enumToString(MealPowers value) {
    switch (value) {
        case MealPowers::CatchingPower:
            return "捕获力";
        case MealPowers::EggPower:
            return "蛋蛋力";
        case MealPowers::EncounterPower:
            return "遭遇力";
        case MealPowers::HumungoPower:
            return "大大力";
        case MealPowers::RaidPower:
            return "团战力";
        case MealPowers::SparklingPower:
            return "闪耀力";
        case MealPowers::TeensyPower:
            return "小小力";
        case MealPowers::TitlePower:
            return "称号力";
        case MealPowers::ExpPointPower:
            return "经验力";
        case MealPowers::ItemDropPower:
            return "掉物力";
        default:
            return "";
    }
}

std::string enumToString(PokemonType value) {
    switch (value) {
        case PokemonType::Bug:
            return "虫";
        case PokemonType::Dark:
            return "恶";
        case PokemonType::Dragon:
            return "龙";
        case PokemonType::Electric:
            return "电";
        case PokemonType::Fairy:
            return "妖精";
        case PokemonType::Fighting:
            return "格斗";
        case PokemonType::Fire:
            return "火";
        case PokemonType::Flying:
            return "飞行";
        case PokemonType::Ghost:
            return "幽灵";
        case PokemonType::Grass:
            return "草";
        case PokemonType::Ground:
            return "地面";
        case PokemonType::Ice:
            return "冰";
        case PokemonType::Normal:
            return "一般";
        case PokemonType::Phychic:
            return "超能";
        case PokemonType::Poison:
            return "毒";
        case PokemonType::Rock:
            return "岩石";
        case PokemonType::Steel:
            return "钢";
        case PokemonType::Water:
            return "水";
        case PokemonType::None:
        default:
            return "";
    }
}

void NormalMenu::addMeal(NormalMeal* meal) {
    _meal_list.push_back(*meal);
}

int NormalMenu::getCost() {
    int sum = 0;
    for (auto meal: _meal_list) {
        sum += meal.getPrice();
    }
    return sum;
}

void NormalMenu::showInfo() {
    std::wcout << "-----------菜单-----------";
    for (auto meal: _meal_list) {
        std::wcout << std::endl;
        auto mealpowers = meal.getMealPowers();
        std::wcout << L"\t餐点：" << stringToWstring(meal.getName()) << std::endl;
        std::wcout << L"\t食力效果：" << std::endl;
        for(auto mealpower : mealpowers) {
            std::wcout << stringToWstring(enumToString(mealpower.first.first)) << " " << mealpower.second << " 级" << std::endl;
        }
    }
    std::wcout << "--------------------------";
}

void GymMenu::addMeal(GymMeal* meal) {
    _meal_list.push_back(*meal);
}

bool GymMenu::isCorrect() {
    for (auto meal: _meal_list) {
        auto name = meal.getName();
        if(name!="烤饭团"&&name!="两人份"&&name!="大字爆炎"&&name!="柠檬")
            return false;
    }
    return true;
}

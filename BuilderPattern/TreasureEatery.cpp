#include <iostream>
#include "Meals.h"
#include "MenuBuilders.h"
#include "Menus.h"
#include "Waiter.h"

int main() {
    // Set the locale to support UTF-8
    std::locale::global(std::locale(""));

    // Use std::wcout for wide character output
    std::wcout.imbue(std::locale(""));


    auto waiter = new Waiter;
    auto menu_builder_Nemona = new NormalMenuBuilder;
    auto menu_builder_Player = new GymMenuBuilder;
    //尼莫正常用餐
    waiter->setBuilder(menu_builder_Nemona);
    waiter->buildNormalMeal();
    auto menu_Nemona = menu_builder_Nemona->getMenu();
    menu_Nemona->showInfo();
    //主角挑战道馆谜题
    waiter->setBuilder(menu_builder_Player);
    waiter->buildCorrectMeal();
    auto menu_Player = menu_builder_Player->getMenu();
    if(menu_Player->isCorrect())
        std::wcout << std::endl << "你过关!" << std::endl;

    delete menu_Player;
    delete menu_Nemona;
    delete menu_builder_Nemona;
    delete menu_builder_Player;
    delete waiter;

    return 0;
}

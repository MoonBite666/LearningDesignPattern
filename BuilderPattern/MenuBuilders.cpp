#include "MenuBuilders.h"
#include "Menus.h"
#include "Meals.h"

MenuBuilder::MenuBuilder(){}
MenuBuilder::~MenuBuilder(){};


void MenuBuilder::buildNum() {
}

void MenuBuilder::buildLevel() {
}

NormalMenuBuilder::NormalMenuBuilder() {
    reset();
}


NormalMenuBuilder::~NormalMenuBuilder() {
    delete _menu;
}

void NormalMenuBuilder::reset() {
    _menu = new NormalMenu;
}

void NormalMenuBuilder::buildMainDish() {
    _menu->addMeal(new SobaNoodleSoup);
}

void NormalMenuBuilder::buildCompliment() {
    _menu->addMeal(new SweetAdzukiBeanSoup);
}

void NormalMenuBuilder::buildNum() {
    1;
}

void NormalMenuBuilder::buildLevel() {
    1;
}


GymMenuBuilder::GymMenuBuilder() {
    reset();
}

GymMenuBuilder::~GymMenuBuilder() {
    delete _menu;
}

void GymMenuBuilder::reset() {
    _menu = new GymMenu;
}

void GymMenuBuilder::buildMainDish() {
    _menu->addMeal(new GymMeal("烤饭团"));
}

void GymMenuBuilder::buildCompliment() {
    _menu->addMeal(new GymMeal("柠檬"));
}

void GymMenuBuilder::buildNum() {
    _menu->addMeal(new GymMeal("两人份"));
}

void GymMenuBuilder::buildLevel() {
    _menu->addMeal(new GymMeal("大字爆炎"));
}

//
// Created by MoonFeather on 24-8-15.
//

#include "Waiter.h"
#include "MenuBuilders.h"

void Waiter::setBuilder(MenuBuilder* builder) {
    _builder = builder;
}

void Waiter::buildCorrectMeal() {
    _builder->buildMainDish();
    _builder->buildCompliment();
    _builder->buildLevel();
    _builder->buildNum();
}

void Waiter::buildNormalMeal() {
    _builder->buildMainDish();
    _builder->buildCompliment();
}

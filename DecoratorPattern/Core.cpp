//
// Created by 120MF on 24-8-27.
//

#include "Core.h"

#include <iostream>

Core::Core(const Player& decorated) : PlayerDecorator(decorated) {
    _name = _decorated.getName() + " in Celeste Core";
    _decorated.setDashes(2);
}

void Core::dash() {
    PlayerDecorator::dash();
}

void Core::groundCharge() {
    std::cout << "In Celeste Core, you can't charge by hitting ground!" << std::endl;
}

//
// Created by 120MF on 24-8-27.
//

#include "Badeline.h"

#include <iostream>


Badeline::Badeline(const Player& decorated) : PlayerDecorator(decorated){
    _name = _decorated.getName() + "with Badeline";
    if(_decorated.getName() == "Eevee") _decorated.setDashes(1);
    else _decorated.setDashes(2);
}

void Badeline::dash() {
    PlayerDecorator::dash();
}

void Badeline::groundCharge() {
    if(_decorated.getName() == "Eevee") {
        PlayerDecorator::groundCharge();
        std::cout << "Badeline won't help eevee, she's worst." << std::endl;
    }
    else {
        PlayerDecorator::groundCharge();
        std::cout << "With Badeline's help, " << _decorated.getName() << "get 2 Dashes!" << std::endl;
    }
}

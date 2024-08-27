//
// Created by 120MF on 24-8-27.
//

#include "PlayerDecorator.h"

PlayerDecorator::PlayerDecorator(const Player& decorated) : _decorated(decorated){}

void PlayerDecorator::dash() {
    _decorated.dash();
}

void PlayerDecorator::groundCharge() {
    _decorated.groundCharge();
}

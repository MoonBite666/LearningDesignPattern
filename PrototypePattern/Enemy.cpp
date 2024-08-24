//
// Created by MoonFeather on 24-8-24.
//

#include "Enemy.h"

#include <iostream>

Enemy::Enemy() : Entity() {
    _id = 1;
}

Entity* Enemy::clone() const{
    std::cout << "An Enemy was cloned." << std::endl;
    return new Enemy();
}



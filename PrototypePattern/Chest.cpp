#include "Chest.h"

#include <iostream>


Chest::Chest() : Entity(){
    _id = 2;
}

Entity* Chest::clone() const{
    std::cout << "A Chest was cloned." << std::endl;
    return new Chest();
}
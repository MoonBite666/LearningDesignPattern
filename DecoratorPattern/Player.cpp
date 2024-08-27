#include "Player.h"

#include <iostream>

void Player::dash() {
    if(_dashes > 0) {
        std::cout << _name << " Dashes!" <<std::endl;
        _dashes--;
    }
    else {
        std::cout << _name << " Can't Dash!" << std::endl;
    }
}

void Player::groundCharge() {
    std::cout << _name << " hits ground and charged!" << std::endl;
    _maxdashes++;
}

const std::string & Player::getName() {
    return _name;
}

void Player::setDashes(int n) {
    _maxdashes = n;
    _dashes = _maxdashes;
}

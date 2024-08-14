#include "HelpSeeker.h"

#include <iostream>

#include "TaskBoard.h"

HelpSeeker::HelpSeeker(const std::string &name) : _name(name){
    _taskBoard = TaskBoard::getInstance();
}

void HelpSeeker::sendTask(int id) const {
    _taskBoard->addTask(id);
    std::cout << std::endl << "Pokemon " << _name << " added a request! ID: " << id << std::endl;
}

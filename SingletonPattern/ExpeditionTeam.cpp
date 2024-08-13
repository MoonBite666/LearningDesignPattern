#include "ExpeditionTeam.h"

#include "TaskBoard.h"
#include <iostream>
#include <thread>

ExpeditionTeam::ExpeditionTeam(const std::string& name, int solveTime) : _name(name), _solveTime(solveTime) {
    _taskBoard = TaskBoard::getInstance();
};

void ExpeditionTeam::startWorking() {
    while(!_taskBoard->isEmpty()) {
        getTask();
        solveTask();
    }
}


void ExpeditionTeam::getTask() {
    if(!_taskBoard->isEmpty()) {
        std::cout << "Task ID: " << _taskBoard->getTask() << " taken by " << "Team " << _name << std::endl;
        _taskBoard->popTask();
    }
}

void ExpeditionTeam::solveTask() {
    std::this_thread::sleep_for(std::chrono::seconds(_solveTime));
    std::cout << "Task solved by Team " << _name << " with " << _solveTime << "sec." <<std::endl;
}


cmake_minimum_required(VERSION 3.28)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(CreationMethod
        FactoryPattern/CreationMethod.cpp)

add_executable(SimpleFactory
     FactoryPattern/SimpleFactory.cpp)

add_executable(FactoryMethod
        FactoryPattern/FactoryMethod.cpp)

add_executable(AbstractFactory
        FactoryPattern/AbstractFactory.cpp)


add_executable(SingletonPattern
        SingletonPattern/TreasureTown.cpp
        SingletonPattern/TaskBoard.cpp
        SingletonPattern/ExpeditionTeam.cpp
        SingletonPattern/HelpSeeker.cpp
)

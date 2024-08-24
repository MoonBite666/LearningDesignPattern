#include <iostream>

#include "Map.h"
#include "Enemy.h"
#include "Chest.h"

#include <random>

int randInRange(int min, int max) {
    std::random_device rd;  // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator
    std::uniform_int_distribution<> distr(min, max); // Define the range

    return distr(gen); // Generate the random number
}

int main() {
    auto *map = new Map(Vector2D(5,5));
    map->printMap();
    std::cout << "-------------------" << std::endl;

    auto enemy = new Enemy();
    for (int i = 0; i < 3; i++) {
        map->addEntity(enemy->clone(), Vector2D(randInRange(2,4),randInRange(2,4)));
    }
    map->printMap();
    std::cout << "-------------------" << std::endl;

    auto chest = new Chest();
    for (int i = 0; i < 2; i++) {
        map->addEntity(chest->clone(), Vector2D(randInRange(0,2),randInRange(0,2)));
    }
    map->printMap();

    return 0;
}

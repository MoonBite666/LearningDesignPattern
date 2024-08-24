#include "Map.h"

#include <iostream>
#include <utility>

#include "Enemy.h"

int Entity::id() const{return _id;}
Entity::~Entity() = default;

Map::Map(const Vector2D size) :_map(size.x, std::vector<Entity*>(size.y,nullptr)){}

void Map::printMap() const {
    for (const auto& row : _map) {
        for(const auto& entity : row) {
            if(entity != nullptr)
                std::cout << entity->id() << " ";
            else
                std::cout << "0 ";
        }
        std::cout << std::endl;
    }
}

void Map::addEntity(Entity* entity, const Vector2D pos) {
    if(pos.y < _map.size() && pos.x < _map[0].size())
    _map[pos.x][pos.y] = entity;
}

Map::~Map() {
    for(const auto& row : _map) {
        for(const auto entity : row) {
            delete entity;
        }
    }
}

#ifndef ENEMY_H
#define ENEMY_H
#include "Map.h"

class Enemy : public Entity {
public:
    Enemy();
    Entity* clone() const override;
};

#endif //ENEMY_H

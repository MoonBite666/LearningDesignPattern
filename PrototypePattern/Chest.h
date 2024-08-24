#ifndef CHEST_H
#define CHEST_H

#include "Map.h"

class Chest : public Entity {
public:
    explicit Chest();
    Entity* clone() const override;

};

#endif //CHEST_H

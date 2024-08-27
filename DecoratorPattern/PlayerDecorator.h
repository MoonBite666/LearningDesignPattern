#ifndef PLAYERDECORATOR_H
#define PLAYERDECORATOR_H
#include "Player.h"

class PlayerDecorator : public Player {
public:
    explicit PlayerDecorator(const Player& decorated);
    void dash() override;
    void groundCharge() override;
protected:
    Player _decorated;
};

#endif //PLAYERDECORATOR_H

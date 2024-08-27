#ifndef CORE_H
#define CORE_H
#include "PlayerDecorator.h"

class Core : public PlayerDecorator {
public:
    explicit Core(const Player& decorated);
    void dash() override;
    void groundCharge() override;
};

#endif //CORE_H

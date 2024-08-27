#ifndef BADELINE_H
#define BADELINE_H
#include "PlayerDecorator.h"

class Badeline : public PlayerDecorator {
public:
    explicit Badeline(const Player& decorated);
    void dash() override;
    void groundCharge() override;

};

#endif //BADELINE_H

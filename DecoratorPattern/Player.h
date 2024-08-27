#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
public:
    virtual ~Player() = default;
    virtual void dash();
    virtual void groundCharge();
    const std::string & getName();
    void setDashes(int);
protected:
    std::string _name;
    int _maxdashes = 1;
    int _dashes = _maxdashes;

};

#endif //PLAYER_H

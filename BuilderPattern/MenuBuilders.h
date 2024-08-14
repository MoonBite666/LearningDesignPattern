#ifndef MENUBUILDERS_H
#define MENUBUILDERS_H

class MenuBuilder {
public:
    MenuBuilder() = default;
    virtual ~MenuBuilder() = default;

    virtual void reset() = 0;
    virtual void buildMainDish() = 0;
    virtual void buildCompliment() = 0;
};

class NormalMenuBuilder : public MenuBuilder {
public:
    NormalMenuBuilder();
    ~NormalMenuBuilder() override;

    void reset() override;
    void buildMainDish() override;
    void buildCompliment() override;
    void buildDessert();
    void buildStirFry();
    void buildRiceBall();
};

class GymMenuBuilder : public MenuBuilder {
public:
    GymMenuBuilder();
    ~GymMenuBuilder() override;

    void reset() override;
    void buildMainDish() override;
    void buildCompliment() override;
    void buildNum();
    void buildLevel();
};


#endif //MENUBUILDERS_H

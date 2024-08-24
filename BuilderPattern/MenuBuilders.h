#ifndef MENUBUILDERS_H
#define MENUBUILDERS_H

class GymMenu;
class NormalMenu;

class MenuBuilder {
public:
    MenuBuilder();
    virtual ~MenuBuilder();

    virtual void reset() = 0;
    virtual void buildMainDish() = 0;
    virtual void buildCompliment() = 0;
    virtual void buildNum();
    virtual void buildLevel();
};

class NormalMenuBuilder : public MenuBuilder {
public:
    NormalMenuBuilder();
    ~NormalMenuBuilder() override;

    void reset() override;
    void buildMainDish() override;
    void buildCompliment() override;
    void buildNum() override;
    void buildLevel() override;
    NormalMenu* getMenu() {return _menu;}
private:
    NormalMenu* _menu;
};

class GymMenuBuilder : public MenuBuilder {
public:
    GymMenuBuilder();
    ~GymMenuBuilder() override;

    void reset() override;
    void buildMainDish() override;
    void buildCompliment() override;
    void buildNum() override;
    void buildLevel() override;
    GymMenu* getMenu(){return _menu;}
private:
    GymMenu* _menu;
};



#endif //MENUBUILDERS_H

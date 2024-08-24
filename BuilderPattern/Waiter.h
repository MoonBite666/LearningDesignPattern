#ifndef WAITER_H
#define WAITER_H
class MenuBuilder;

class Waiter {
public:
    void setBuilder(MenuBuilder* builder);
    void buildCorrectMeal();
    void buildNormalMeal();
private:
    MenuBuilder* _builder;
};

#endif //WAITER_H

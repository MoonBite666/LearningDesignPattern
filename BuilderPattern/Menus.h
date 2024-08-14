#ifndef MENU_H
#define MENU_H
#include <list>

class NormalMeal;
class NormalMenu {
public:
    ~NormalMenu() = default;
    void addMeal(NormalMeal meal);

    int getCost();
    void showInfo();

private:
    std::list<NormalMeal> _meal_list;
};


class GymMeal;
class GymMenu {
public:
    ~GymMenu() = default;
    void addMeal(GymMeal meal);
    bool isCorrect();
private:
    std::list<GymMeal> _meal_list;
};

#endif //MENU_H
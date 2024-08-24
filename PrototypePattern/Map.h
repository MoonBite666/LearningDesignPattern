#ifndef MAP_H
#define MAP_H
#include <memory>
#include <vector>


struct Vector2D {
    int x;
    int y;

    explicit Vector2D(int x = 0, int y = 0) : x(x), y(y){}

    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x + other.x, y + other.y);
    }
    //Other operator can be added...

};

class Entity {
public:
    explicit Entity() = default;
    virtual ~Entity();
    virtual Entity* clone() const = 0;
    int id() const;
protected:
    int _id = 0;
};

class Map {
public:
    explicit Map(Vector2D size);
    ~Map();

    void printMap() const;
    void addEntity(Entity*, Vector2D pos);

private:
    std::vector<std::vector<Entity*>> _map;
    //2D dynamic array

};

#endif //MAP_H

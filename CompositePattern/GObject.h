#ifndef GOBJECT_H
#define GOBJECT_H
#include <string>

class GObject {
public:
    explicit GObject(GObject* parent);
    virtual ~GObject();
    void setParent(GObject* node);
    GObject* getParent();
    void setName(const std::string & name);
    const std::string & getName();
    virtual bool hasChild();
    virtual void add(GObject* node);
    virtual void remove(GObject* node);
    virtual void render() = 0;

protected:
    std::string _name;
    GObject* _parent = nullptr;
};

#endif //GOBJECT_H

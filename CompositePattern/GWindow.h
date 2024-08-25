#ifndef GWINDOW_H
#define GWINDOW_H
#include <list>

#include "GObject.h"

class GWindow : public GObject {
public:
    explicit GWindow(GObject* parent);
    ~GWindow() override;
    bool hasChild() override;
    std::list<GObject*> getChildren();
    void add(GObject *node) override;
    void remove(GObject *node) override;
    void render() override;

private:
    std::list<GObject*> _children;

};

#endif //GWINDOW_H

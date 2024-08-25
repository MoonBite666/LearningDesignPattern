#ifndef GVLAYOUT_H
#define GVLAYOUT_H
#include <list>

#include "GObject.h"

class GHLayout;
class GVLayout : public GObject {
public:
    explicit GVLayout(GObject* parent);
    ~GVLayout() override;
    bool hasChild() override;
    std::list<GObject*> getChildren();
    void add(GObject *node) override;
    void remove(GObject *node) override;
    void render() override;
private:
    GHLayout* _adapter;
};

#endif //GVLAYOUT_H

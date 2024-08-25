#ifndef GHLAYOUT_H
#define GHLAYOUT_H
#include <list>

#include "GObject.h"

class GHLayout : public GObject {
public:
    explicit GHLayout(GObject* parent);
    ~GHLayout() override;
    bool hasChild() override;
    std::list<GObject*> getChildren();
    void add(GObject *node) override;
    void remove(GObject *node) override;
    void render() override;
private:
    std::list<GObject*> _children;

};

#endif //GHLAYOUT_H

#include "GHLayout.h"

GHLayout::GHLayout(GObject *parent) : GObject(parent){}

GHLayout::~GHLayout() {
    for(const auto child : _children) {
        delete child;
    }
    _children.clear();
}
bool GHLayout::hasChild() {
    return !_children.empty();
}

std::list<GObject *> GHLayout::getChildren() {
    return _children;
}

void GHLayout::add(GObject *node) {
    _children.push_back(node);
}

void GHLayout::remove(GObject *node) {
    node->setParent(nullptr);
    _children.remove(node);
}

void GHLayout::render() {
    for(const auto child : _children) {
        child->render();
    }
}

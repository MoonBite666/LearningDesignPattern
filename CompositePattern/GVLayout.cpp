#include "GVLayout.h"

#include <iostream>

#include "GHLayout.h"

GVLayout::GVLayout(GObject *parent) : GObject(parent), _adapter(new GHLayout(parent)){}

GVLayout::~GVLayout() {
    delete _adapter;
}

bool GVLayout::hasChild() {
    return _adapter->hasChild();
}

std::list<GObject *> GVLayout::getChildren() {
    return _adapter->getChildren();
}

void GVLayout::add(GObject *node) {
    _adapter->add(node);
}

void GVLayout::remove(GObject *node) {
    _adapter->remove(node);
}

void GVLayout::render() {
    for(const auto child : _adapter->getChildren()) {
        child->render();
        std::cout << std::endl;
    }
}

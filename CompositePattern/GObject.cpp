#include "GObject.h"

GObject::GObject(GObject* parent) {
    setParent(parent);
}

GObject::~GObject() = default;

void GObject::setParent(GObject *node) {
    _parent = node;
}

GObject * GObject::getParent() {
    return _parent;
}

void GObject::setName(const std::string &name) {
    _name = name;
}

const std::string & GObject::getName() {
    return _name;
}

bool GObject::hasChild() {
    return false;
}

void GObject::add(GObject *node) {}

void GObject::remove(GObject *node) {}


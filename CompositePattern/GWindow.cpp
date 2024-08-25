//
// Created by MoonFeather on 24-8-25.
//

#include "GWindow.h"

#include <iostream>

GWindow::GWindow(GObject *parent) : GObject(parent){}

GWindow::~GWindow() {
    for(const auto child : _children) {
        delete child;
    }
}

bool GWindow::hasChild() {
    return !_children.empty();
}

std::list<GObject *> GWindow::getChildren() {
    return _children;
}

void GWindow::add(GObject *node) {
    _children.push_back(node);
}

void GWindow::remove(GObject *node) {
    node->setParent(nullptr);
    _children.remove(node);
}

void GWindow::render() {
    std::cout << "|----- " << _name << " ---------- - x|" << std::endl;
    for(auto child : _children) {
        std::cout << "|";
        child->render();
        std::cout << std::endl;
    }
    std::cout << "|-----------------------------|" << std::endl;
}

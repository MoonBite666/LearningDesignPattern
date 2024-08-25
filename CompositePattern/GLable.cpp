#include "GLable.h"
#include <iostream>
#include <utility>

GLable::GLable(GObject *parent) : GObject(parent){}

GLable::GLable(GObject *parent, std::string text) : GObject(parent), _text(std::move(text)){}


const std::string & GLable::text() const {
    return _text;
}

void GLable::text(const std::string &text) {
    _text = text;
}

void GLable::render() {
    std::cout << _text;
}

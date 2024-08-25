#include "Note.h"

#include <iostream>

#include "Pattern.h"



#if 0
#include "Shape.h"

Note::Note(Pattern *pattern, Shape *shape) : _pattern(pattern), _shape(shape){}

Note::~Note() {
    delete _pattern;
    delete _shape;
}

void Note::printSelf() {
    std::cout << "A " << _pattern->getName() << " " << _shape->getName() << " Note";
}
#endif
Note::Note(Pattern *pattern) : _pattern(pattern){}

Note::~Note() {
    delete _pattern;
}

void Note::setPattern(Pattern *pattern) {
    _pattern = pattern;
}

NoteTap::NoteTap(Pattern *pattern) : Note(pattern){}

void NoteTap::printSelf() {
    std::cout << "A " << _pattern->getName() << " Tap" << std::endl;
}

NoteHold::NoteHold(Pattern *pattern) : Note(pattern), _last_bar(0){}

void NoteHold::printSelf() {
    std::cout << "A " << _pattern->getName() << " Hold with " << _last_bar << " bar" << std::endl;
}

void NoteHold::setDuration(const int x) {_last_bar = x;}

NoteSlide::NoteSlide(Pattern *pattern) : Note(pattern), _last_bar(0){}

void NoteSlide::printSelf() {
    std::cout << "A " << _pattern->getName() << " Slide with " << _last_bar << " bar" << std::endl;
}

void NoteSlide::setDuration(const int x) {_last_bar = x;}

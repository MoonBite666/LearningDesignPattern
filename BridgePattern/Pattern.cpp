#include "Pattern.h"

const std::string & Pattern::getName() {
    return _p_name;
}

PatternPink::PatternPink() {
    _p_name = "Pink";
}

PatternBlue::PatternBlue() {
    _p_name = "Blue";
}

PatternYellow::PatternYellow() {
    _p_name = "Yellow";
}

PatternBreak::PatternBreak() {
    _p_name = "Break";
}




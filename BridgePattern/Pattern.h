#ifndef PATTERN_H
#define PATTERN_H
#include <string>

class Pattern {
public:
    Pattern() = default;
    ~Pattern() = default;
    const std::string & getName();

protected:
    std::string _p_name;
};

class PatternPink : public Pattern {
public:
    PatternPink();
};

class PatternBlue : public Pattern {
public:
    PatternBlue();
};

class PatternYellow : public Pattern {
public:
    PatternYellow();
};

class PatternBreak : public Pattern {
public:
    PatternBreak();
};



#endif //PATTERN_H

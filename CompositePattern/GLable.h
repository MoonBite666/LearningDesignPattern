#ifndef GLABLE_H
#define GLABLE_H
#include "GObject.h"

class GLable : public GObject {
public:
    explicit GLable(GObject* parent);
    explicit GLable(GObject* parent, std::string text);
    ~GLable() override = default;
    [[nodiscard]] const std::string & text() const;
    void text(const std::string &text);
    void render() override;
private:
    std::string _text;


};

#endif //GLABLE_H

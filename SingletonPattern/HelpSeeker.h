#ifndef HELPSEEKER_H
#define HELPSEEKER_H
#include <string>

class TaskBoard;

class HelpSeeker {
public:
    explicit HelpSeeker(const std::string& name);
    ~HelpSeeker() = default;
    void sendTask(int) const;
private:
    std::string _name;
    TaskBoard* _taskBoard;
};

#endif //HELPSEEKER_H

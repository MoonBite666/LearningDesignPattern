#ifndef EXPEDITIONTEAM_H
#define EXPEDITIONTEAM_H
#include <string>

class TaskBoard;
class ExpeditionTeam {
public:
    explicit ExpeditionTeam(const std::string& name, int solveTime);
    ~ExpeditionTeam() = default;
    void startWorking();

private:
    void getTask();
    void solveTask();
    std::string _name;
    TaskBoard* _taskBoard;
    int _solveTime;

};

#endif //EXPEDITIONTEAM_H

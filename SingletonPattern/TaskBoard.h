#ifndef BULLETINBOARD_H
#define BULLETINBOARD_H
#include <atomic>
#include <mutex>
#include <queue>

class TaskBoard {
public:
    TaskBoard(const TaskBoard& obj) = delete;
    TaskBoard& operator=(const TaskBoard& obj) = delete;
    ~TaskBoard() = default;
    static TaskBoard* getInstance();
    void print();
    bool isEmpty() const;
    void popTask();
    void addTask(int);
    int getTask() const;

private:
    TaskBoard() = default;
    std::queue<int> _taskQueue;
    static TaskBoard* _instance;
    static std::mutex _mutex;
    static std::atomic<TaskBoard*> _atomic_instance;
};


#endif //BULLETINBOARD_H

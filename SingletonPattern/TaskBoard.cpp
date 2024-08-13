#include "TaskBoard.h"

#if 0

/* 饿汉模式
 * 类加载时先创建好实例，再对外提供应用
 * 避免出现资源竞争
 */

TaskBoard* TaskBoard::getInstance() {
    return TaskBoard::_instance;
}
TaskBoard* TaskBoard::_instance = new TaskBoard;
#endif

#if 0

/* 懒汉模式
 * 在使用getInstance()时创建唯一实例
 * 减少内存占用
 * 非线程安全，需要特殊处理
 */


TaskBoard* TaskBoard::getInstance() {
    if(_instance == nullptr)
        _instance = new TaskBoard;
    return TaskBoard::_instance;
}
#endif


#if 0

/* 懒汉模式下的双重检查锁定法
 * 通过两个嵌套的if来判断对象是否为空
 * 不完全的线程安全（可能会被指令重排）
 */

TaskBoard* TaskBoard::getInstance() {
    if(_instance == nullptr) {
        _mutex_.lock();
        if(_instance == nullptr)
            _instance = new TaskBoard;
        _mutex.unlock();
    }
    return TaskBoard::_instance;
}
#endif

#if 0

/* 懒汉模式原子变量实现
 * 在双重检查锁定的基础上使用原子变量
 * 保证处理指令的时候使用默认原子顺序进行顺序原子操作
 * 避免指令重排
 * 多线程安全但效率低
 */

TaskBoard* TaskBoard::getInstance() {
    TaskBoard* board = _atomic_instance.load();
    if(board == nullptr) {
        std::lock_guard<std::mutex> locker(_mutex); // 使用lock_guard管理锁，无需手动解锁
        if(board == nullptr) {
            board = new TaskBoard;
            _atomic_instance.store(board);
        }
    }
    return board;
}

#endif

#if 0

/* 懒汉方法使用静态局部变量实现
 * 在getInstance()方法中定义了一个局部公告板对象，并且将这个对象作为唯一的单例实例。
 * C++11规定如果指令逻辑进入一个未被初始化的声明变量，所有并发执行应当等待该变量完成初始化。
 */

TaskBoard* TaskBoard::getInstance() {
    static TaskBoard board;
    return &board;
}

#endif

#if 1
std::mutex TaskBoard::_mutex;

TaskBoard* TaskBoard::getInstance() {
    return TaskBoard::_instance;
}
TaskBoard* TaskBoard::_instance = new TaskBoard;
// 使用饿汉模式
// 即使如此涉及到除了单一实例以外的变量也要注意多线程安全性

bool TaskBoard::isEmpty() const{
    std::lock_guard<std::mutex> locker(_mutex);
    if(_taskQueue.empty())
        return true;
    return false;
}

void TaskBoard::popTask() {
    std::lock_guard<std::mutex> locker(_mutex);
    if(!_taskQueue.empty()) _taskQueue.pop();
}

void TaskBoard::addTask(const int id) {
    std::lock_guard<std::mutex> locker(_mutex);
    _taskQueue.push(id);
}

int TaskBoard::getTask() const{
    std::lock_guard<std::mutex> locker(_mutex);
    if(!_taskQueue.empty()) return _taskQueue.front();
    return -1;
}


#endif
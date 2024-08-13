#include <iostream>
#include <memory>

class Programmer {
public:
    void code() {
        std::cout << "Coding" << std::endl;
    }
};
class Department {
public:
    /* 静态创建方法
     * 封装了Programmer类对象的创建细节
     * 返回可重用对象
     * 区分以不同参数调用的构造函数
     */
    static auto createProgramer(){
        return std::make_shared<Programmer>();
    }

};

int main() {
    auto programmer = Department::createProgramer();
    programmer->code();
    return 0;
}
#include <iostream>
#include <memory>
#include <stdexcept>

enum class EmployeeType {
    Programmer,
    Designer,
};

class Employee {
public:
    virtual ~Employee() = default;
    virtual void work() = 0;
};

class Programmer : public Employee {
public:
    void work() override {
        std::cout << "Coding" << std::endl;
    }
};
class Designer : public Employee {
public:
    void work() override {
        std::cout << "Drawing" << std::endl;
    }
};

class Department {
public:
    /* 简单工厂模式
     * 通过条件语句判断Type，创建不同的对象
     * 违背开闭原则：软件中的对象应该对扩展开放，对修改封闭
     * 即应该添加新代码，而不是修改原有代码
     */
    std::shared_ptr<Employee> createEmployee(EmployeeType type) {
        switch (type) {
            case EmployeeType::Programmer:
                return std::make_shared<Programmer>();
            case EmployeeType::Designer:
                return std::make_shared<Designer>();
            default:
                throw std::invalid_argument("Invalid Employee Type");
        }
    }
};


int main() {
    Department department;
    auto programmer = department.createEmployee(EmployeeType::Programmer);
    programmer->work();
    auto designer = department.createEmployee(EmployeeType::Designer);
    designer->work();
    auto invalid = department.createEmployee(static_cast<EmployeeType>(2));
    return 0;
}
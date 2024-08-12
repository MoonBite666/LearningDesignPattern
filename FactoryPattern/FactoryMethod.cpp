#include <iostream>
#include <memory>

class Employee {
public:
    virtual ~Employee() = default;
    virtual int registerAccount() = 0;
};
class Programmer : public Employee {
public:
    int registerAccount() override {
        auto id = rand();
        std::cout << "Register Programmer Account ID:" << id  << std::endl;
        return id;
    }
};
class Designer : public Employee {
public:
    int registerAccount() override {
        auto id = rand();
        std::cout << "Register Designer Account ID:" << id  << std::endl;
        return id;
    }
};

class Department {
public:
    virtual std::shared_ptr<Employee> createEmployee() = 0;
    /* 工厂方法模式的核心
     * 稳定的模板流程
     * 流程中各部分的具体内容由子类定义
     */
    int onboard() {
        auto employee = createEmployee();
        return employee->registerAccount();
    }
    virtual ~Department() = default;
};

class ITDepartment : public Department {
public:
    std::shared_ptr<Employee> createEmployee() final {
        return std::make_shared<Programmer>();
    }
};

class UIDepartment : public Department {
public:
    std::shared_ptr<Employee> createEmployee() final {
        return std::make_shared<Designer>();
    }
};

int main() {
    ITDepartment it_department;
    auto id1 = it_department.onboard();
    UIDepartment ui_department;
    auto id2 = ui_department.onboard();
    std::cout << "ID1: " << id1 << " ID2: " << id2;
    return 0;
}
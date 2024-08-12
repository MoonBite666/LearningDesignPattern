#include <iostream>
#include <memory>
#include <unordered_map>
#include <vector>

class Employee {
public:
    virtual ~Employee() = default;
    virtual int registerAccount() = 0;
};
class Programmer : public Employee {
public:
    int registerAccount() override {
        const auto id = rand();
        std::cout << "Register Programmer Account ID:" << id  << std::endl;
        return id;
    }
};
class Designer : public Employee {
public:
    int registerAccount() override {
        const auto id = rand();
        std::cout << "Register Designer Account ID:" << id  << std::endl;
        return id;
    }
};

class Project {
public:
    virtual ~Project() = default;
    virtual void assignTo(int) = 0;
};

class ITProject : public Project {
public:
    void assignTo(int id) override {
        std::cout << "Assign an ITProject to Programmer ID:" << id << std::endl;
    }
};

class UIProject : public Project {
public:
    void assignTo(int id) override {
        std::cout << "Assign an UIProject to Designer ID:" << id << std::endl;
    }
};

class Department {
public:
    virtual std::shared_ptr<Employee> createEmployee() = 0;
    virtual std::shared_ptr<Project> createProject() = 0;
    virtual ~Department() = default;
};

class ITDepartment : public Department {
public:
    std::shared_ptr<Employee> createEmployee() final {
        return std::make_shared<Programmer>();
    }
    std::shared_ptr<Project> createProject() final {
        return std::make_shared<ITProject>();
    }
};

class UIDepartment : public Department {
public:
    std::shared_ptr<Employee> createEmployee() final {
        return std::make_shared<Designer>();
    }
    std::shared_ptr<Project> createProject() final {
        return std::make_shared<UIProject>();
    }
};

class DepartmentManager {
    Department & department;
public:
    std::vector<std::shared_ptr<Project>> projects;
    std::unordered_map<int, std::shared_ptr<Employee>> employees;
    explicit DepartmentManager(Department & department) : department(department) {}
    auto createProject() {
        auto project = department.createProject();
        projects.push_back(project);
        return project;
    }
    auto createEmployee() {
        const auto employee = department.createEmployee();
        const auto id = employee->registerAccount();
        employees[id] = employee;
        return id;
    }
};

int main() {
    ITDepartment it_department;
    DepartmentManager it_manager(it_department);
    const auto project = it_manager.createProject();
    const auto id = it_manager.createEmployee();
    project->assignTo(id);
    return 0;
}
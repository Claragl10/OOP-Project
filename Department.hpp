#ifndef DEPARTMENT_HPP
#define DEPARTMENT_HPP

#include <vector>
#include "Employee.hpp" 

using namespace std;
class Department {
public:
    void addEmployee(const Employee& employee);
    void deleteEmployee(int employeeID);
    void listEmployees() const;

    const Employee& getEmployeeByID(int employeeID) const;
    const vector<Employee>& getAllEmployees() const;

private:
    vector<Employee> employees;
};

#endif 


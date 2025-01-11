#include "Department.hpp"
#include <iostream>
#include <algorithm> 
#include <stdexcept> 

void Department::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void Department::deleteEmployee(int employeeID) {
    employees.erase(
        remove_if(employees.begin(), employees.end(),
                       [employeeID](const Employee& e) { return e.getID() == employeeID; }),
        employees.end());
}

void Department::listEmployees() const {
    for (const auto& employee : employees) {

        cout << "Name: " << employee.getName() 
             << ", ID: " << employee.getID()
             << ", Salary: " << employee.getSalary() 
             << ", Position: " << employee.getPosition() << endl;
    }
}

const Employee& Department::getEmployeeByID(int employeeID) const {
    auto it = find_if(employees.begin(), employees.end(),
                           [employeeID](const Employee& e) { return e.getID() == employeeID; });

    if (it != employees.end()) {
        return *it;
    } else {
        
        throw out_of_range("Error: No employee found with the specified ID.");
    }
}

const vector<Employee>& Department::getAllEmployees() const {
    return employees;
}


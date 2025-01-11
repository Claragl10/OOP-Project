#include "Employee.hpp"
#include <iostream>
using namespace std;

Employee::Employee(const string& name, int id, double salary, const string& position)
    : name(name), id(id), salary(salary), position(position) {}

const string& Employee::getName() const {
  return name;
}

int Employee::getID() const {
  return id; 
}

double Employee::getSalary() const {
  return salary; 
}

const string& Employee::getPosition() const {
  return position; 
}
	
void Employee::updateSalary(double newSalary) {
    if (newSalary > 0) {
        salary = newSalary;
    } else {
        cout << "Error: The new salary must be positive.\n";
    }
}


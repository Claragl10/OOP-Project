#include <iostream>
#include "Employee.hpp"
#include "Department.hpp"
#include "Salary_management.hpp"
#include "Statistics.hpp"

using namespace std;

int main() {
    Department IADepartment;

    IADepartment.addEmployee(Employee("Clara Garcia", 001, 50000.0, "Executive"));
    IADepartment.addEmployee(Employee("Noemi Serna", 002, 30000.0, "Programmer"));
    IADepartment.addEmployee(Employee("Carla Gonzalez", 003, 35000.0, "Programmer"));

    cout << "Employees in IA Department:\n";
    IADepartment.listEmployees();

    Employee& ClaraGarcia = const_cast<Employee&>(IADepartment.getEmployeeByID(1));
    SalaryManagement::updateEmployeeSalary(ClaraGarcia, 60000.0);

    cout << "\nEmployees in IA Department after salary update:\n";
    IADepartment.listEmployees();

    // calculate and display general statistics
    vector<Employee> allEmployees = IADepartment.getAllEmployees();
    cout << "\nGeneral Statistics:\n";
    cout << "Average Salary: " << Statistics::calculateAverageSalary(allEmployees) << endl;
    cout << "Total Employees: " << Statistics::getTotalEmployees(allEmployees) << endl;
    
    IADepartment.deleteEmployee(003);
    cout << "\nEmployees in IA Department after deleting employee with ID 3:\n";
    IADepartment.listEmployees();

    return 0;
}


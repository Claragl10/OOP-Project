#ifndef STATISTICS_HPP
#define STATISTICS_HPP
#include <vector>
#include <iostream>
#include "Employee.hpp" 

using namespace std;

class Statistics {
public:
   
    static double calculateAverageSalary(const vector<Employee>& employees);
    static int getTotalEmployees(const vector<Employee>& employees);
};

#endif 


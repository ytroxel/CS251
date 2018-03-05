/*Create a class called Employee that includes three pieces of information as
data members—a first name (type string), a last name (type string) and a monthly salary (type
int). Your class should have a constructor that
initializes the three data members. Provide a set and a get function for each data member. If the
monthly salary is not positive, set it to 0. Write a test program that demonstrates class Employee’s
capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee
a 10 percent raise and display each Employee’s yearly salary again.*/

/ Employee.h
// Employee class definition.
#include <string> // program uses C++ standard string class

// Employee class definition
class Employee {
public:
// Employee constructor initializes the three data members
Employee(std::string first, std::string last, int salary) 
: firstName{first}, lastName{last} {

if (salary >= 0) { // if salary is valid
monthlySalary = salary; // set monthlySalary to salary
}
}

// set first name
void setFirstName(std::string name) {
firstName = name; // no validation needed
}

// return first name
std::string getFirstName() {
return firstName;
}

// set last name
void setLastName(std::string name) {
lastName = name; // no validation needed
}

// return last name
std::string getLastName() {
return lastName;
}

// set monthly salary; if not positive, set to 0
void setMonthlySalary(int salary) { 
if (salary >= 0) { // if salary is valid
monthlySalary = salary; // set monthlySalary to salary
}

if (salary < 0) { // if salary is negative
monthlySalary = 0; // set monthlySalary to 0
}
}

// return monthly salary
int getMonthlySalary() {
return monthlySalary;
} 
private:
std::string firstName; // Employee's first name
std::string lastName; // Employee's last name
int monthlySalary{0}; // Employee's salary per month
};





// EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include "Employee.h" // include definition of class Employee
using namespace std;

// function main begins program execution
int main() {
// create two Employee objects
Employee employee1{"Lisa", "Roberts", 4500};
Employee employee2{"Mark", "Stein", 4000};

// display each Employee's yearly salary
cout << "Employees' yearly salaries: " << endl;

// retrieve and display employee1's monthly salary multiplied by 12
int monthlySalary1{employee1.getMonthlySalary()};
cout << employee1.getFirstName() << " " << employee1.getLastName() 
<< ": $" << monthlySalary1 * 12 << endl;

// retrieve and display employee2's monthly salary multiplied by 12
int monthlySalary2{employee2.getMonthlySalary()};
cout << employee2.getFirstName() << " " << employee2.getLastName() 
<< ": $" << monthlySalary2 * 12 << endl;

// give each Employee a 10% raise
employee1.setMonthlySalary(monthlySalary1 + monthlySalary1 / 10);
employee2.setMonthlySalary(monthlySalary2 + monthlySalary2 / 10);

// display each Employee's yearly salary again
cout << "\nEmployees' yearly salaries after 10% raise: " << endl;

// retrieve and display employee1's monthly salary multiplied by 12
monthlySalary1 = employee1.getMonthlySalary();
cout << employee1.getFirstName() << " " << employee1.getLastName() 
<< ": $" << monthlySalary1 * 12 << endl;

monthlySalary2 = employee2.getMonthlySalary();
cout << employee2.getFirstName() << " " << employee2.getLastName() 
<< ": $" << monthlySalary2 * 12 << endl;
}

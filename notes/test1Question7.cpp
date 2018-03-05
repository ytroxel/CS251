/*(Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see that
your heart rate stays within a safe range suggested by your trainers and doctors. According to the American
Heart Association (AHA) (www.americanheart.org/presenter.jhtml?identifier=4736), the
formula for calculating your maximum heart rate in beats per minute is 220 minus your age in years.
Your target heart rate is a range that is 50–85% of your maximum heart rate. [Note: These formulas are
estimates provided by the AHA. Maximum and target heart rates may vary based on the health, fitness and
gender of the individual. Always consult a physician or qualified health care professional before beginning or
modifying an exercise program.] Create a class called HeartRates. The class attributes should include the
person’s first name, last name and date of birth (consisting of separate attributes for the month, day
and year of birth). Your class should have a constructor that receives this data as parameters. For each
attribute provide set and get functions. The class also should include a function getAge that calculates
and returns the person’s age (in years), a function getMaxiumumHeartRate that calculates and returns
the person’s maximum heart rate and a function getTargetHeartRate that calculates and returns the
person’s target heart rate. Since you do not yet know how to obtain the current date from the computer,
function getAge should prompt the user to enter the current month, day and year before calculating
the person’s age. Write an application that prompts for the person’s information, instantiates an object
of class HeartRates and prints the information from that object—including the person’s first name,
last name and date of birth—then calculates and prints the person’s age in (years), maximum heart rate
and target-heart-rate range. */

/ HeartRates.h
// HeartRates class for computing target heart rates.
#include <string>

class HeartRates
{
public:
// Constructor
HeartRates(std::string first, std::string last, int m, int d, int y)
: firstName{first}, lastName{last}, birthMonth{m}, 
birthDay{d}, birthYear{y} {
}

// set first name
void setFirstName(std::string first) {
firstName = first;
}

// get first name
std::string getFirstName() {
return firstName;
}

// set last name
void setLastName(std::string last) {
lastName = last;
}

// get last name
std::string getLastName() {
return lastName;
}

// set birth month
void setBirthMonth(int m) {
birthMonth = m;
}

// get birth month
int getBirthMonth() {
return birthMonth;
}

// set birth day
void setBirthDay(int d) {
birthDay = d;
}

// get birth day
int getBirthDay() {
return birthDay;
}

// set birth year
void setBirthYear(int y) {
birthYear = y;
}

// get birth year
int getBirthYear() {
return birthYear;
}

// calculate age
int getAge() {
// if current date has not yet been set, get it from user
if (0 == currentYear) {
std::cout << "Please enter today's month, day, and year: ";
std::cin >> currentMonth >> currentDay >> currentYear;
}

if (currentMonth < birthMonth) {
return currentYear - birthYear - 1;
}
else if (currentMonth == birthMonth) {
if (currentDay < birthDay) {
return currentYear - birthYear - 1;
}
}

return currentYear - birthYear;
}

// get maximum heart rate
int getMaximumHeartRate() {
return 220 - getAge();
}

// calculate minimum target heart rate
int getMinimumTargetHeartRate() {
return 50 * getMaximumHeartRate() / 100;
}

// calculate maximum target heart rate
int getMaximumTargetHeartRate() {
return 85 * getMaximumHeartRate() / 100;
} 
private:
std::string firstName; // user's first name
std::string lastName; // user's last name
int birthMonth{0}; // user's birth month
int birthDay{0}; // user's birth day
int birthYear{0}; // user's birth year
int currentMonth{0}; // current month
int currentDay{0}; // current day
int currentYear{0}; // current year
};

// HeartRatesDriver.cpp
// Driver program for HeartRates class
#include <iostream>
#include <string>
#include "HeartRates.h"
using namespace std;

int main()
{
string firstName;
string lastName; 
int month;
int day;
int year;

// get user input
cout << "Please enter first and last name: ";
cin >> firstName >> lastName;
cout << "Please enter month, day, and year of birth: ";
cin >> month >> day >> year;

// create a HeartRates object
HeartRates heartRates{firstName, lastName, month, day, year};

// display user information
cout << "First Name: " << heartRates.getFirstName() << "\n";
cout << "Last Name: " << heartRates.getLastName() << "\n";
cout << "Date of Birth: " << heartRates.getBirthMonth() << "/"
<< heartRates.getBirthDay() << "/"
<< heartRates.getBirthYear() << "\n";
cout << "Age: " << heartRates.getAge() << "\n";
cout << "Maximum Heart Rate: "
<< heartRates.getMaximumHeartRate() << "\n";
cout << "Target Heart Rate: "
<< heartRates.getMinimumTargetHeartRate() << "-"
<< heartRates.getMaximumTargetHeartRate() << "\n";
}

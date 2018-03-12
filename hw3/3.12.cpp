/* (date class)Create a class called Date that includes three pieces of information as data members-a month(type int),a day(type int)
and a year(type int). Your class should have a constructor with three parameters that uses the parameters to initialize the three data
members. For the purpose of this exercise, assume that the values provided for the year and day are correct, but ensure that the month 
value si in the range 1- 12; if it isn't, set the moth to 1. Provide a set and get function for each data member. Provide a member function
displayDate that displays the month, day and year separated by forward slashes(/). Write a test program that demonstrates class Date's 
capabilities*/

#include <iostream>
#include "Date.hpp"
using namespace std;

int main()
{
Date object;
int day, month, year;

cout << "Enter the day of the Date:\n" << "DD\r";
cin >> day;
object.setDay(day);

cout << "Enter the month of the Date:\n" << "MM\r";
cin >> month;
object.setMonth(month);

if (month <= 1)
	object.setMonth(1);
else if (month > 12)
	object.setMonth(1);

cout << "Enter the year of the Date:\n" << "YYYY\r";
cin >> year;
object.setYear(year);

cout << object.getMonth() << "/" << object.getDay() << "/" 
<< object.getYear() << endl;


}

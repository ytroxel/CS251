/* write a program that inputs three integers from the keyboard and prints the
sum, average, product, smallest and largest of these numbers. The screen dialog
should should appear as follows: input three different integers: 13 27 14
sum is 54
average is 18
product is 4914
smallest is 13
largest is 27
*/

#include <iostream>
using namespace std;

int main()
{
 int number1{0}; //first integer read from user
 int number2{0}; //second integer read from user
 int number3{0}; //third integer read from user
 int smallest{0}; //smallest integer read from user
 int largest{0}; //largest integer read from user
 
 cout << "Input three different integers: ";
 cin >> number1 >> number2 >> number3;
 
 largest = number1; // assume first integer is largest

if (number2 > largest) { // is number2 larger?
largest = number2; // number2 is now the largest
}

if (number3 > largest) { // is number3 larger?
largest = number3; // number3 is now the largest
}

smallest = number1; // assume first integer is smallest

if (number2 < smallest) { // is number2 smaller?
smallest = number2; // number2 is now the smallest
}

if (number3 < smallest) { // is number3 smaller?
smallest = number3; // number3 is now the smallest
}

cout << "Sum is " << number1 + number2 + number3 
<< "\nAverage is " << (number1 + number2 + number3) / 3 
<< "\nProduct is " << number1 * number2 * number3 
<< "\nSmallest is " << smallest 
<< "\nLargest is " << largest << endl;
}

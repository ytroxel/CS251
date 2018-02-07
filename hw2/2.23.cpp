#include <iostream>
using namespace std;

int main()
{
 int a;
 int b;
 int c;
 int d;
 int e;
 int largest;
 int smallest;
 cout << "enter five integers:" << endl;
 cin >> a >> b >> c >> d >> e;
 
 smallest = a;
 largest = a;

 if ( b < smallest )
  smallest = b;
 if ( c < smallest )
  smallest = c;
 if ( d < smallest )
  smallest = d;
 if ( e < smallest )
   smallest = e;

 if ( b > largest )
   largest = b;
 if ( c > largest )
   largest = c;
 if ( d > largest )
   largest = d;
 if ( e > largest )
   largest = e;

 cout << largest << " is the largest" << endl;
 cout << smallest << " is the smallest" << endl;
}


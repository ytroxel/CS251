#include <iostream>
using namespace std;

int main()
{
 int x;
 int y;
 cout << "enter two integers: " << endl;
 cin >> x >> y;
 
 if ( x > y )
  cout << x << " is larger" << endl;
 if ( y > x )
  cout << y << " is larger" << endl;
 if ( x == y )
  cout << "These numbers are equal" << endl;
}

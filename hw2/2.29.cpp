#include <iostream>
using namespace std;


int main()
{
cout << "integer\tsquare\tcube" << endl;
int x = 0;
 do 
 {
   cout << x << "\t";
   cout << x * x << "\t";
   cout << x * x * x << "\t" << endl;
   x++;
 }
 while ( x < 11 );
}

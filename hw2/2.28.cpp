#include <iostream>
using namespace std;

int main()
{
  cout << "Enter a five digit integer: " << endl;
  int x;
  cin >> x;
  cout << x / 10000 << "   ";
  cout << x / 1000 % 100 % 10 << "   ";
  cout << x / 100 % 10 << "   ";
  cout << x / 10 % 10 << "   ";
  cout << x / 1 % 10 << "   " << endl;

}

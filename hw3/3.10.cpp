//invoice file
#include <iostream>
#include "Invoice.hpp"
#include <string>
using namespace std;

int main()
{
  Account invoice1(string name, int number, string descrip, int quantity)
  
  cout << "Enter tool name: \n";
  getline(cin, name);
  Invoice.setName(name);
  cin.ignore;
  
  cout << "Enter tool number: \n";
  cin >> number;
  Invoice.setNumber(number);
  
  cout << "Enter tool description: \n";
  getline(cin, descrip)
  Invoice.setDescription(descrip);
  
  cout << "Enter tool quantity: \n";
  cin >> quantity;
  Invoice.setQuantity(quantity);
  
  cout << "Tool entered: \n";
  cout << Invoice.getName << endl;
  cout << Invoice.getNumber << endl;
  cout << Invoice.getDescription << endl;
  cout << Invoice.getQuantity << endl;
  
  return 0;
}

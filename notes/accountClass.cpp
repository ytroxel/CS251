//save as Account.h
#include <string> //enable program to use c++ spring data type

class Account
{
public:
 //member funtion that sets the account name in the object
 void setName(std::string accountName)
 {
  name = accountName; // store the account name
 }
 
 //member funtion that retrieves the account name from teh object
 std::string getName() const
 {
  return name; // return name's value to this funtion's caller
 }
private:
 std::string name; //data member containing account holder's name
}; //end class account

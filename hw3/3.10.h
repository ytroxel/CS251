// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//save as Account.h
#include <string> //enable program to use c++ spring data type
using namespace std;

class Account
{
public:
	//member funtion that sets the account name in the object
	void setpartNumber(string inputtedNumber)
	{
		partNumber = inputtedNumber; // store the account name
	}

	//member funtion that retrieves the account name from the object
	string getinputtedNumber() const
	{
		return partNumber; // return name's value to this funtion's caller
	}
	void setName(string accountName)
	{
		name = accountName;
	}

	std::string getName() const
	{
		return name;
	}
	void setName(string accountName)
	{
		name = accountName;
	}

	
	std::string getName() const
	{
		return name; 
	}
	void setName(string accountName)
	{
		name = accountName; 
	}

	
	std::string getName() const
	{
		return name; 
	}
private:
	string partNumber;//data member containing account holder's name
	string partDescription;
	int price;
	int quantity;
}; //end class account

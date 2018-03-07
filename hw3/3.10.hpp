/* (Invoice Class) Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at 
the store. An Invoice should include four data members—a part num- ber (type string), a part description (type string), a 
quantity of the item being purchased (type int) and a price per item (type int). [Note: In subsequent chapters, we’ll use 
numbers that contain decimal points (e.g., 2.75)—called floating-point values—to represent dollar amounts.] Your class should 
have a constructor that initializes the four data members. A constructor that receives multiple arguments is defined with the 
form:
ClassName( TypeName1 parameterName1, TypeName2 parameterName2, ... )*/

#include <string>
using namespace std;

class Invoice(string pN, int pNu, string pD, int qu)
{
public:
  void setName(string pN)
  {
    pName = pN;
  }
  void setNumber(int pNu)
  {
    pNum = pNu;
  }  
  void setDescription(string pD)
  {
    pDes = pD;
  }  
  void setQuantity(int qu)
  {
    quant = qu;
  } 
  
  string getName() const
  {
    return pName;
  }
  int getNumber() const
  {
    return pNum;
  }
  string setDescription() const
  {
    return pDes;
  }
  int setQuantity() const
  {
    return quant;
  }

private:
stirng pName;
int pNum;
string pDes;
int quant;
}

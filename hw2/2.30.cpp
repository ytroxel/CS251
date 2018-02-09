#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter your weight in pounds(lbs): ";
    int w;
    cin >> w;
    
    cout << "Enter your height in inches(in): ";
    int h;
    cin>> h;
    int bmi = 703 * w / pow(h, 2);
    //pow(variable,#) power command from cmath library
    cout << "Your BMI is:" << bmi << endl;

    if ( bmi < 18.5 )
    {
    	cout << "STATUS: Underweight\n";
    }
    else if ( bmi <= 24.9 )
    {
    	cout << "STATUS: Normal\n";
    }
    else if ( bmi <= 29.9 )
    {
    	cout << "STATUS: Overweight\n";
    }
    else if ( bmi >= 30 )
    {
    	cout << "STATUS: Obese\n";
    }

    

}

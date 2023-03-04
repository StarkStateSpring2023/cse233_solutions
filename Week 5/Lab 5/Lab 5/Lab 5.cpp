// Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*************************************************
- Gillis
- 03/03/23
- Lab 5 - MPG Calculator
- Console app to prompt user how many liters of gas they used
- App will convert the value and show what the vehicles MPG was
******************************************************/


/*
* 
A liter is 0.264179 gallons.
Write a program that will read in the number of liters of gasoline consumed by the user's car and the number of miles traveled by the car
Then output the number of miles per gallon the car delivered.
Your program should allow the user to repeat this calculation as often as the user wishes.
Define a function to compute the number of miles per gallon.
Your program should use a globally defined constant for the number of liters per gallon.
Sample output : 20 liters of gasoline used, 120 miles traveled = 22.71 mpg
*/

#include <iostream>
#include <iomanip>      // std::setprecision
#define const double LITER_GALL_CONV_RATE  = 0.264179; // Another way to declare the Global COnstant (this will ensure it works on all files of project)

using namespace std;

const double LITER_TO_GALLON_CONVERSION_RATE = 0.264179; // While this is "Global" it still has a scope to just on the this file

double milePerGallon(int Liter, int Miles);

int main()
{

	int liter = 0;
	int miles = 0;
	char exitCode = 'Y';


	//I prefer to use While for loops, but you could also use a DO/WHILE
	while (exitCode == 'Y' || exitCode == 'y')
	{
		cout << "Enter the number of Liters your vehical will consume: ";
		cin >> liter;

		cout << "Enter the number of Miles you plan to drive: ";
		cin >> miles;

		cout << liter << " Liters of gasoline used, " << miles << " miles traveled = " << setprecision(2) << milePerGallon(liter, miles) << " mpg" << endl;

		cout << "Would you like to calculate again? (Y for yes): ";
		cin >> exitCode;
	}

	//This would be my approach to a do while loop
		//Notice how I still am using a seperate prompt for if we should continue / exit
		//Even if you use a 0 to exit type approach instead of using a (true) in the condition, write it out
		//Using Breaks in your code is not ideal and should be avoided
	do {
		cout << "Enter the number of Liters your vehical will consume: ";
		cin >> liter;

		cout << "Enter the number of Miles you plan to drive: ";
		cin >> miles;

		cout << liter << " Liters of gasoline used, " << miles << " miles traveled = " << setprecision(2) << milePerGallon(liter, miles) << " mpg" << endl;

		cout << "Would you like to calculate again? (Y for yes): ";
		cin >> exitCode;
	} while (exitCode == 'y' || exitCode == 'Y');






	return 0;
}

/// <summary>
/// Basic function that will use the global constant to convert liters to galles 
/// Then solve for MPG
/// </summary>
/// <param name="liter"></param>
/// <param name="miles"></param>
/// <returns> Return a double representing MPG </returns>
double milePerGallon(int liter, int miles)
{
	double gallon = (LITER_TO_GALLON_CONVERSION_RATE * liter);
	return (miles / gallon);
}



// Lab 4 Solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*************************************************
-Gillis
- 03 / 04 / 23
- Lab 4 - Factor Function
- Console app to prompt user for 2 integers, and determine if the second is a factor of the 1st
* *****************************************************/

/*
Write a function called factor that determines for a pair of integers whether the second integer is a factorof the first. The function should take two integer arguments and return true if the second is a factorof the first, false otherwise. Use this function in a program that inputs a series of pairs of integers.

Hint: You will want to use modulus.

Output:  Enter in two integers: 8 4
4 is a factorof 8

Enter in two integers 9 4
4 is NOT a factorof 9

*/


#include <iostream>
using namespace std;

bool Factor(int firstNum, int secondNum);

int main()
{

	char cont = 'Y';

	//Loop to allow us to reset and continue prompting user for different inputs
		//Using the toupper() function to ensure if they entered y or Y we will still accept that to continue
	while (toupper(cont) == toupper('Y')) {


		int input1, input2;
		cout << "Enter two integers: "; //user will enter 2 integers
		cin >> input1 >> input2;


		//Basic call with if statement to output the proper is/ is Not response
		//if (Factor(input1, input2)) 
		//{
		//	cout << input2 << " is a factor of " << input1 << endl;
		//}
		//else//output if result is false
		//{
		//	cout << input2 << " is NOT a factor of " << input1 << endl;
		//}

		//Little bit fancier of a way to do the ouput, using a Tertiary operator
			// here the ? represent a True/False output, then the " " will output when true and "NOT " will output when the value is false
		cout << input2 << " is " << (Factor(input1, input2) ? " " : "NOT ") << "a factor of " << input1 << endl;


		//Prompt the user to see if they want to keep going or exit the program
		cout << "Would you like to test more numbers??? Enter 'Y' to continue, hit any key to exit:   ";
		cin >> cont;

	}

	
	system("Pause");
	return 0;
}


/// <summary>
///  Function will take 2 numbers, and determine if the second is a factor of the 1st
///		Will use Mod and return a True/False value
/// </summary>
bool Factor(int firstNum, int secondNum)
{
	if (firstNum % secondNum == 0)
		return true;
	else
		return false;
}

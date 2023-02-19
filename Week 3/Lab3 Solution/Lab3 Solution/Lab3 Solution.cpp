// Lab3 Solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*************************************************
- Gillis
- 02/19/23
- Lab 3 - Chocolate Bar Problem
- Console app to prompt user for amount they will spend and number of coupons.
- App will show how many choclate bars they will get and how many coupons they will have left.
******************************************************/


/*
Suppose you can buy a chocolate bar from the vending machine for $1 each. 
Inside every chocolate bar is a coupon. You can redeem seven coupons for one chocolate bar from the machine. 
You would like to know how many chocolate bars you can eat, including from those redeemed via coupon, if you have n dollars.

For example, if you have 20 dollars then you can initially buy 20 chocolate bars. 
This gives you 20 coupons. You can redeem 14 coupons for twoadditional chocolate bars. 
These two additional chocolate bars give you two more coupons, so you now have a total of eight coupons. 
This gives you enough to redeem for one final chocolate bar. As a result you now have 23 chocolate bars and two leftover coupons.

Write a program that inputs the number of dollars and outputs how many chocolate bars you can collect after spending all your money and redeeming as many coupons as possible.
Also output the number of leftover coupons. The easiest way to solve thisproblem is to use a loop.

Hint:You will need to use integer division and modulus for this program

Testing Output:

Enter in the amount of money you have: 20
You can buy 23 chocolate bars and have 2 leftover coupons.

Enter in the amount of money you have: 50
You can buy 58 chocolate bars and have 2 leftover coupons.

Enter in the amount of money you have: 11
You can buy 12 chocolate bars and have 5 leftover coupons.


*/

#include <iostream>
using namespace std;

int main()
{
	const int freeChocWithCoupons = 7;
	int dollarsToSpend;
	char cont = 'Y';

	

	//Loop to allow us to reset and continue prompting user for different inputs
		//Using the toupper() function to ensure if they entered y or Y we will still accept that to continue
	while (toupper(cont) == toupper('Y')) {


		//Prompt the user for how much they want to spend
		cout << "Enter the number of dollars you have to spend: "; 
		cin >> dollarsToSpend;


		//Determine how many bars from cash
		int chocolateBars = dollarsToSpend;

		//Determine how many coupons we get from cash
		int couponsToUse = dollarsToSpend;


		//Loop to determine how many free bars we would get given the number of coupons
			// First: divide coupons / how many are free
			// Second: add that number of free bars to existing count
			// Third: Determine how many coupons we still have to use
						// How many free bars we got (since each one has one) and then the remainder when you divide the value by 7
		while (couponsToUse >= freeChocWithCoupons) {
			int freeBars = couponsToUse / freeChocWithCoupons;
			chocolateBars += freeBars;
			couponsToUse = freeBars + couponsToUse % 7;
		}
		
		//Ouput the results
		cout << "You can buy " << chocolateBars << " bars";
		cout << " and will have " << couponsToUse << " unused  coupon(s)" << endl;



		//Prompt the user to see if they want to keep going or exit the program
		cout << "Would you like to buy more chocolate bars??? Enter 'Y' to continue, hit any key to exit:      ";
		cin >> cont;

	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

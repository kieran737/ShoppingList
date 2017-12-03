/*-----------------------------------------------------------------------------

Name: Kieran Hodge

Date: 16/10/2014

Lab number: 1

--------------------------------------------------------------------------------
Program Description: This program will Calculate VAT that a user inputs and it will 
Also allow the user to input the item that they wish to purchase and then display all
The final calculations at the end of the program looking like a normal invoice.
--------------------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string Item;

int main ()
{
	//All this part of the program does is basically welcome the customer.
	cout << setw (50);
	cout << endl << "*Welcome to My Store!*" << endl;

	//This allow's the user to input characters into the program, for example what the user wants to purchase.
	stringstream(Item) >> Item;
	cout << setw (60);
	cout << endl << "Enter Item that you want to Purchase: ";
	getline (cin, Item);

	//This variable allow's the user to input the price of the product they wish to purchase.
	float price;
	cout << setw (43);
	cout << "Cost of Item: " << char(156) ;
	cin >> price;


	//Both of these variables calculate how much the user needs to pay with and without VAT.
	float excludingVAT = (price * 0.2);
	float VAT = (price * 0.2) + price;

	//The following lines of code basically prints out the final calculations.
	cout << setw (48);
	cout << endl << "Final Cost of Your " << Item << endl;
	cout << setw (52);	
	cout << fixed << showpoint << setprecision(2);	
	cout << "Amount of VAT Applied: " << char(156) << excludingVAT << endl;
	cout << setw (44);	
	cout << "Including VAT: "<< char(156) << VAT << endl;

	//All this code does it display a thank you message and then prompts the users to terminate the console.
	cout << setw (53);
	cout << endl <<"*Thank You for shopping!*" << endl;	

	system("pause");
}
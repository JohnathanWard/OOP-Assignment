// CustomerAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>
#include "LoanClass.h"

using namespace std;

//The class clsCustomer, this will store the customer's information


//Passing sName through so it can be used
void clsCustomer::SetName(string sNamePass)
{
	sName = sNamePass;
}

//Gets the name string from SetName
string clsCustomer::GetName()
{
	return sName;
}

//Passing iAge so it can be used
void clsCustomer::SetAge(int iAgePass)
{
	iAge = iAgePass;
}

//Gets the age int from SetAge
int clsCustomer::GetAge()
{
	return iAge;
}

//Passes dTotalEarnings so it can be used
void clsCustomer::SetTotalEarnings(double dEarningsPass)
{
	dTotalEarnings = dEarningsPass;
}

//Gets the total earnings from SetTotalEarnings
double clsCustomer::GetTotalEarnings()
{
	return dTotalEarnings;
}

//Asks for the amount of customers to be stored in the system
int UserAmount()
{
	int iUserAmount;
	cout << "Please insert the amount of customers \n";
	cin >> iUserAmount;
	return iUserAmount;

}

//Allows for the setting of customers details
void SetCustomerDetails(vector <clsCustomer> *objCustomerPass)
{
	string sName = "";
	int iAge;
	double dTotalEarnings;
	
	objCustomerPass->push_back(clsCustomer());
	for (int iCount = 0; iCount < objCustomerPass->size(); iCount++)
	{
		cout << "Please insert the customers name \n" << iCount + 1;
		cin >> sName;
		objCustomerPass->at(iCount).SetName(sName);

		cout << "Please insert the customers age \n" << iCount + 1;
		cin >> iAge;
		objCustomerPass->at(iCount).SetAge(iAge);

		cout << "Please insert their total earnings \n" << iCount + 1;
		cin >> dTotalEarnings;
		objCustomerPass->at(iCount).SetTotalEarnings(dTotalEarnings);
	}
}

//Outputs the customers details with the amount specified
void OutPutCustomerDetails(vector <clsCustomer> *objCustomerPass)
{
	for (int iCount = 0; iCount < objCustomerPass->size(); iCount++)
	{
		cout << "\nThe customers name is: \n" << objCustomerPass->at(iCount).GetName() << iCount + 1;
		cout << "\nThe customers age is: \n" << objCustomerPass->at(iCount).GetAge() << iCount + 1;
		cout << "\nThe customers total earnings are: \n" << objCustomerPass->at(iCount).GetTotalEarnings() << iCount + 1;

	}
}

//A function that allows the user to add a single user
void AddUser(vector <clsCustomer> *objCustomerPass)
{
	clsCustomer objCustomerTemp;
	string sName = "";
	int iAge = 0;
	double dTotalEarnings;

	cout << "Please insert the customers name \n" << objCustomerPass->size();
	cin >> sName;
	objCustomerTemp.SetName(sName);

	cout << "\n Please insert the customers age \n";
	cin >> iAge;
	objCustomerTemp.SetAge(iAge);

	cout << "\n Please insert the customers earnings \n";
	cin >> dTotalEarnings;
	objCustomerTemp.SetTotalEarnings(dTotalEarnings);

	objCustomerPass->push_back(objCustomerTemp);

	cout << "The user " << sName << " has been created \n";
}

//Function to delete a user
void DeleteUser(vector <clsCustomer> *objCustomerPass)
{
	objCustomerPass->pop_back();
	cout << "User deleted \n";
}

//Input for the menu system
int MenuSelection()
{
	int iSelection = 0;
	cout << "Please select an option \n";
	cin >> iSelection;

	return iSelection;
}

//The menu system options
void MenuOptions() {
	cout << "\n1. Add customer \n";
	cout << "2. Number of customers \n";
	cout << "3. Delete customer \n";
	cout << "4. Output every customer \n";
	cout << "5. Exit \n";
}

//The menu system functionality
void Menu()
{
	vector <clsCustomer> objCustomer(0);
	int iSelection = 0;

	do {
		MenuOptions();
		iSelection = MenuSelection();

		switch (iSelection)
		{
		case 1:
			AddUser(&objCustomer);
			break;
		case 2:
			UserAmount();
			break;
		case 3:
			DeleteUser(&objCustomer);
			break;
		case 4:
			OutPutCustomerDetails(&objCustomer);
			break;
		case 5:
			cout << "Exiting \n";
			break;
		default:
			cout << "Invalid input \n";
		}
	} while (iSelection != 5);
}

int main()
{
	//Used to show the menu, remove this then the program stops working
	Menu();
	_getch();

	return 0;
}


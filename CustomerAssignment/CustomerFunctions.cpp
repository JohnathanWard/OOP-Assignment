// CustomerAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>
#include <vector>
#include "Classes.h"

using namespace std;

void clsCustomer::SetAmount(int iUserAmountPass)
{
	iUserAmount = iUserAmountPass;
}

int clsCustomer::GetAmount()
{
	return iUserAmount;
}

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

//Allows for the setting of customers details
void SetCustomerDetails(vector <clsCustomer> *objCustomerPass)
{
	string sName = "";
	int iAge, iUserAmount;
	double dTotalEarnings;

	cout << "How many customers would you like? \n";
	cin >> iUserAmount;

	objCustomerPass->push_back(clsCustomer());
	
	for (int iCount = 0; iCount < iUserAmount; iCount++) {
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
			iUserAmount + 1;
		}
	}
}
//Outputs the customers details with the amount specified
void OutPutCustomerDetails(vector <clsCustomer> *objCustomerPass)
{
	for (int iCount = 0; iCount < objCustomerPass->size(); iCount++)
	{
		cout << "\nThe customers name is: " << objCustomerPass->at(iCount).GetName() << iCount + 1;
		cout << "\nThe customers age is: " << objCustomerPass->at(iCount).GetAge() << iCount + 1;
		cout << "\nThe customers total earnings are: " << objCustomerPass->at(iCount).GetTotalEarnings() << "\n"<< iCount + 1;
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

	cout << "The customer " << sName << " has been created \n";
}

//Function to delete a user
void DeleteUser(vector <clsCustomer> *objCustomerPass)
{
	objCustomerPass->pop_back();
	cout << "User deleted \n";
}

//This function will delete all of the users in the program
void DeleteAllUsers(vector <clsCustomer> *objCustomerPass)
{
	objCustomerPass->clear();
	cout << "All users deleted \n";
}

void AgeInfo(vector <clsCustomer> *objCustomerPass)
{
	
	for (int iCount = 0; iCount < objCustomerPass->size(); iCount++) {
		if (objCustomerPass->at(iCount).GetAge() < 18)
		{
			cout << "Customer is too young \n" << iCount + 1;
			objCustomerPass->at(iCount).GetAge();
		}
		else if (objCustomerPass->at(iCount).GetAge() > 18 && objCustomerPass->at(iCount).GetTotalEarnings() < 12000)
		{
			cout << "Customer qualifies for a short term loan \n";
			objCustomerPass->at(iCount).GetAge();
		}
		else if (objCustomerPass->at(iCount).GetAge() < 21 && objCustomerPass->at(iCount).GetTotalEarnings() < 21000)
		{
			cout << "Customer qualifies for a short term loan \n" << iCount + 1;
			objCustomerPass->at(iCount).GetName();
		}
		else if (objCustomerPass->at(iCount).GetAge() > 21 && objCustomerPass->at(iCount).GetTotalEarnings() > 24000)
		{
			cout << "Customer qualifies for a long term loan \n" << iCount + 1;
			objCustomerPass->at(iCount).GetAge();
		}
		else if (objCustomerPass->at(iCount).GetAge())
		{
			cout << "Customer qualifies for nothing \n" << iCount + 1;
			objCustomerPass->at(iCount).GetAge();
		}
	}
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
	cout << "3. Delete last customer entered \n";
	cout << "4. Delete every customer entered \n";
	cout << "5. Output every customer \n";
	cout << "6. Exit \n";
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
			SetCustomerDetails(&objCustomer);
			break;
		case 3:
			DeleteUser(&objCustomer);
			break;
		case 4:
			DeleteAllUsers(&objCustomer);
			break;
		case 5:
			OutPutCustomerDetails(&objCustomer);
			AgeInfo(&objCustomer);
			break;
		case 6:
			cout << "Exiting \n";
			break;
		default:
			cout << "Invalid input \n";
		}
	} while (iSelection != 6);
}

int main()
{
	//Used to show the menu, remove this then the program stops working
	Menu();
	_getch();

	return 0;
}


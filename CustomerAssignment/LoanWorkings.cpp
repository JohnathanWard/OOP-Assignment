#include "pch.h"
#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>
#include <vector>
#include "Classes.h"
#include "Funct.h"


using namespace std;
/*
void clsLoanWorkings::SetTotal(double dTotalPass)
{
	dTotal = dTotalPass;
}

double clsLoanWorkings::GetTotal()
{
	return dTotal;
}

void clsLoanWorkings::SetTotalPayable(double dTotalPayPass)
{
	dTotalPayable = dTotalPayPass;
}

double clsLoanWorkings::GetTotalPayable()
{
	return dTotalPayable;
}

void SetLoanTotal(vector <clsLoan> *dTotalPass)
{
	cout << "The total loan comes to: " << dTotalPass;
}

void ShowLoanInformation(vector <clsCustomer> *objCustomerPass)
{
	for (int iCount = 0; iCount < objCustomerPass->size(); iCount++)
	{
		cout << "The type of loan is for customer " << objCustomerPass->at(iCount).GetName() << iCount + 1;
		cout << "The loan length is: \n";
		cout << "The APR for one year is: \n";
		cout << "The APR for the time required is: \n";
		cout << "The amount comes to: \n";
	}
}

void LoanTotals(vector <clsLoan> *LoanPass)
{
	cout << "The loan the customer is eleigble for is: " << dTotal;
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
*/
#include "pch.h"
#include <iostream>
#include <string>
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>
#include "LoanClass.h"

using namespace std;

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



void ShowLoanInformation(vector <clsLoan> *objCustomerPass)
{
	cout << "The type of loan is for customer ";
	cout << "The loan length is: \n";
	cout << "The APR is: \n";
}
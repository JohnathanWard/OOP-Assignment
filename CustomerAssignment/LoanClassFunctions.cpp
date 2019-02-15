#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <array>
#include "Classes.h"
#include "Funct.h"
using namespace std;

void clsLoan::SetLoan(string sSetLoanPass)
{
	sLoan = sSetLoanPass;
}

string clsLoan::GetLoan()
{
	return sLoan;
}

void clsLoan::SetLoanType(string sLoanTypePass)
{
	sLoan = sLoanTypePass;
}

string clsLoan::GetLoanType()
{
	return sLoanType;
}

void clsLoan::SetLoanLength(int iLoanLengthPass)
{
	iLoanLength = iLoanLengthPass;
}

int clsLoan::GetLoanLength()
{
	return iLoanLength;
}

void clsLoan::SetLoanAPR(double dLoanAprPass)
{
	dAPR = dLoanAprPass;
}

double clsLoan::GetLoanAPR()
{
	return dAPR;
}

void clsLoan::SetMaxLoan(double dMaxLoanPass)
{
	dMaxLoan = dMaxLoanPass;
}

double clsLoan::GetMaxLoan()
{
	return dMaxLoan;
}

int InputCustomer()
{
	int iCustomerInput = 0;
	cout << "Please select which loan you would like \n";
	cin >> iCustomerInput;
	return iCustomerInput;
}

void InputSelection()
{
	cout << "1. Emergency \n";
	cout << "2. Short Term \n";
	cout << "3. Long Term \n";
}

void CustomerInputs()
{
	do {
	iCustomerInput = InputCustomer;
	InputSelection();
		switch (sLoan)
		{
		case 1:
			LoanAmounts(&objLoanPass);
			break;
		case 2:
			LoanAmounts(&objLoanPass);
			break;
		case 3:
			LoanAmounts(&objLoanPass);
			break;
		default:
			cout << "Invalid \n";
			break;
		}
	} while (iCustomerInput != 3);
}

void LoanAmounts(vector <clsCustomer> *objCustomerPass)
{
	for (int iCount = 0; iCount < objCustomerPass->size(); iCount++) {
		cout << "\nThe customers total earnings are: " << objCustomerPass->at(iCount).GetTotalEarnings() << "\n " << iCount + 1;
		cout << "The amount is: " << objCustomerPass->at(iCount).GetTotalEarnings() / 12 << "\n" << iCount + 1;
		cout << "The loan will be financed over ";
	}
}


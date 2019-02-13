#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <array>
#include "Classes.h"

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



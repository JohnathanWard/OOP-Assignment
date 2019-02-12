#include "pch.h"
#include <iostream>

#include <string>
#include <conio.h>
#include <array>
#include "LoanClass.h"

using namespace std;
//The class clsLoan this will store the loan information
class clsLoan
{
private:
	string sLoan;
	string sLoanType;
	int iLoanLength;
	double dAPR;
	double dMaxLoan;
public:
	void SetLoan(string);
	string GetLoan();
	void SetLoanType(string);
	string GetLoanType();
	void SetLoanLength(int);
	int GetLoanLength();
	void SetLoanAPR(double);
	double GetLoanAPR();
	void SetMaxLoan(double);
	double GetMaxLoan();
};


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

/*void ShowLoanInformation(vector <clsLoan> *objLoanPass)
{
	cout << "This is a test";
}
*/

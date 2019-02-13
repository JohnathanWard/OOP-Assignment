#pragma once
// LoanAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include "LoanWorkings.cpp"

using namespace std;

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


class clsLoanWorkings : public clsLoan
{
private:
	double dTotal;
	double dTotalPayable;
public:
	void SetTotal(double);
	double GetTotal();
	void SetTotalPayable(double);
	double GetTotalPayable();
};
void Menu();
void MenuOptions();

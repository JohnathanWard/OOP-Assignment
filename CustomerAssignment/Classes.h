#pragma once
// LoanAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>

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

//The class clsCustomer, this will store the customer's information
class clsCustomer
{
private:
	string sName;
	int iAge, iUserAmount;
	double dTotalEarnings;
public:
	void SetAmount(int);
	int GetAmount();
	void SetAge(int);
	int GetAge();
	void SetName(string);
	string GetName();
	void SetTotalEarnings(double);
	double GetTotalEarnings();
};

//A class that does the maths for the loans
class clsLoanWorkings : public clsLoan, public clsCustomer
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

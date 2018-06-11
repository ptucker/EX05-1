#include "Account.h"
#include "Transaction.h"
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

vector<transaction> account::getVector()
{
	return trans;
}

account::account()
{
	name = "placeholder";
	id = 0;
	balance = 0;
	annualInterestRate = .015;
}

account::account(int id, double balance, string name)
{
	(*this).id = id;
	(*this).balance = balance;
	(*this).name = name;
	annualInterestRate = .015;
}

string account::getName()
{
	return name;
}

int account::getId()
{
	return id;
}

double account::getBalance()
{
	return balance;
}

double account::getAnnualInterestRate()
{
	return annualInterestRate;
}

void account::setName(string name)
{
	(*this).name = name;
}

void account::setId(int id)
{
	(*this).id = id;
}

void account::setBalance(double balance)
{
	(*this).balance = balance;
}

void account::setAnnualInterestRate(double annualInterestRate)
{
	(*this).annualInterestRate = annualInterestRate;
}

double account::getMonthlyInterestRate()
{
	return (annualInterestRate/12);
}

void account::withdraw(double cash, string descrip)
{
	transaction beans('W', cash, balance - cash, descrip);
	trans.push_back(beans);
	balance = balance - cash;
}

void account::deposit(double cash,string descrip)
{
	transaction beans('W', cash, balance + cash, descrip);
	trans.push_back(beans);
	balance = balance + cash;
}

transaction account::getTransaction(int i)
{
	return trans[i];
}
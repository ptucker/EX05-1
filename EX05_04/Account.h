#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
#include <vector>
#include "transaction.h"
using namespace std;

class account	//this whole exercise is a mess but I wasn't sure how else to do it
{
private:
	int id;
	double balance;
	double annualInterestRate;
	string name;
	vector<transaction> trans;
public:
	vector<transaction> getVector();
	account();
	account(int, double, string);
	string getName();
	int getId();
	double getBalance();
	double getAnnualInterestRate();
	void setName(string);
	void setId(int);
	void setBalance(double);
	void setAnnualInterestRate(double);
	double getMonthlyInterestRate();
	void withdraw(double,string);
	void deposit(double,string);
	transaction getTransaction(int);
};
#endif 
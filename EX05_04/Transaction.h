#ifndef TRANSACTIONS_H_
#define TRANSACTIONS_H_
#include <iostream>
#include <string>
using namespace std;

class transaction
{
private:
	char date;
	char type;
	double amount;
	double balance;
	string description;
public:
	transaction(char, double, double, string);
	char getDate();
	char getType();
	double getAmount();
	double getBalance();
	string getDescription();
	void setDate(char);
	void setType(char);
	void setAmount(double);
	void setBalance(double);
	void setDescription(string);
};
#endif
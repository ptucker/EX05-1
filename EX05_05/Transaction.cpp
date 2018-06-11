#include "Transaction.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

transaction::transaction(char type, double amount, double balance, string desc)
{
	char date[9];			//seemed like I started travelling down an endless web of programming exercises so I used time.h instead of the mystery "date exercise"
	_strdate_s(date);		//this function variable is new to me, it was suggested with an error code I got and it seems to work well so far
	(*this).type = type;
	(*this).amount = amount;
	(*this).balance = balance;
	description = desc;
}

char transaction::getDate()
{
	return date;
}

char transaction::getType()
{
	return type;
}

double transaction::getAmount()
{
	return amount;
}

double transaction::getBalance()
{
	return balance;
}

string transaction::getDescription()
{
	return description;
}

void transaction::setDate(char date)
{
	(*this).date = date;
}

void transaction::setType(char type)
{
	(*this).type = type;
}

void transaction::setAmount(double amount)
{
	(*this).amount = amount;
}

void transaction::setBalance(double balance)
{
	(*this).balance = balance;
}

void transaction::setDescription(string description)
{
	(*this).description = description;
}
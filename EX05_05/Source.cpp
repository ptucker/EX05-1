#include "Account.h"
#include <iostream>
using namespace std;

// 19/20

int main()
{
	account george(1122,1000,"George");
	george.deposit(30, "Paycheck");
	george.deposit(40, "Grandma's will");
	george.deposit(50, "Direct deposit");
	george.withdraw(5, "Walmart");
	george.withdraw(4, "BlockBuster");
	george.withdraw(2, "MicroSoft");
	cout << "Account holder: "<<george.getName()<<endl;
	cout << "Interest rate: " << george.getAnnualInterestRate() << endl;
	cout <<"Balance: $"<< george.getBalance()<<endl;
	int count = george.getVector().size();
	for (int i = 0; i < count; i++) {
		cout << george.getTransaction(i).getType() <<
			" \tAmount:" << george.getTransaction(i).getAmount() <<
			" \tBalance:" << george.getTransaction(i).getBalance() <<
			" \t" << george.getTransaction(i).getDescription() << endl;
	}

	system("pause");
	return 0;
}

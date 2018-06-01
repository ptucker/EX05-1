#include "MyInteger.h"
#include <sstream>

//PT -- Notice that there's some copy/paste (e.g. two versions of isPrime()). Could you use the static function in the member function?
// 20/20

MyInteger::MyInteger()
{
	value = 0;
}
MyInteger::MyInteger(int NewValue)
{
	value = NewValue;
}
const int MyInteger::GetInteger()
{
	return value;
}
const bool MyInteger::isEven()
{
	int i = value;
	if (i % 2 == 0)
		return (true);
	else
		return (false);
}
const bool MyInteger::isOdd()
{
	int i = value;
	if (i % 2 != 0)
		return (true);
	else
		return (false);
}
const bool MyInteger::isPrime()
{
	int n = value;
	bool isPrime = true;
	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		return (true);
	else
		return (false);
}
bool MyInteger::isEven(int value)
{
	if (value % 2 == 0)
		return (true);
	else
		return (false);
}
bool MyInteger::isOdd(int value)
{
	if (value % 2 != 0)
		return (true);
	else
		return (false);
}
bool MyInteger::isPrime(int value)
{
	int n = value;
	bool isPrime = true;
	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		return (true);
	else
		return (false);
}
bool MyInteger::isEven(MyInteger& n)
{
	if (n % 2 == 0)
		return (true);
	else
		return (false);
}
bool MyInteger::isOdd(MyInteger& n)
{
	if (n % 2 != 0)
		return (true);
	else
		return (false);
}
bool MyInteger::isPrime(MyInteger& n)
{
	bool isPrime = true;
	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		return (true);
	else
		return (false);
}
const bool MyInteger::equals(int n)
{
	if (value == n)
		return (true);
	else
		return (false);
}
const bool MyInteger::equals(const MyInteger& n)
{
	if (value == n)
		return (true);
	else
		return (false);
}
int MyInteger::parseInt(const string& wat)
{
return(atoi(wat));
}

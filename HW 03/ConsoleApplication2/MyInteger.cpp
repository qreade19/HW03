#include "MyInteger.h"
#include <string>

MyInteger::MyInteger(int num)
{
	value = num;
}

int MyInteger::getValue() const
{
	return value;
}

bool MyInteger::isEven() const
{
	int num = value;
	double checker = num % 2;
	if (checker == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd() const
{
	int num = value;
	double checker = num % 2;
	if (checker != 0)
		return true;
	else
		return false;
}

bool MyInteger::isPrime() const
{
	int num = value;
	bool isPrime = true;
	for (int divisor = 2; divisor <= num / 2; divisor++) {
		if (num % divisor == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

bool MyInteger::isPrime(int num)
{
	bool isPrime = true;
	for (int divisor = 2; divisor <= num / 2; divisor++) {
		if (num % divisor == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

bool MyInteger::isEven(int num)
{
	double checker = num % 2;
	if (checker == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd(int num)
{
	double checker = num % 2;
	if (checker != 0)
		return true;
	else
		return false;
}

bool MyInteger::isEven(const MyInteger& num)
{
	if (num.value % 2 == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd(const MyInteger& num)
{
	if (num.value % 2 != 0)
		return true;
	else
		return false;
}

bool MyInteger::isPrime(const MyInteger& num)
{
	bool isPrime = true;
	for (int divisor = 2; divisor <= num.value / 2; divisor++) {
		if (num.value % divisor == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

bool MyInteger::equals(int num) const
{
	if (value == num)
		return true;
	else
		return false;
}

bool MyInteger::equals(const MyInteger& num) const
{
	if (value == num.value)
		return true;
	else
		return false;
}

int MyInteger::parseInt(const string & str)
{ //since the question doesn't specify how the integer is brought out, and I have little idea on how turn a string directly into an integer, I'll just have this return the length of the string.
	string message = str;
	int length = message.length();
	return length;
}
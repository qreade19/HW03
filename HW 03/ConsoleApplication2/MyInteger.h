#pragma once
#ifndef MYINTEGER_H
#define MYINTEGER_H
#include <iostream>
#include <string>
using namespace std;

class MyInteger
{
private:
	int value;

public:
	MyInteger(int num);
	int getValue() const;
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	static bool isEven(int num);
	static bool isOdd(int num);
	static bool isPrime(int num);
	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);
	bool equals(int num) const;
	bool equals(const MyInteger&) const;
	static int parseInt(const string&);
};

#endif
#pragma once
#ifndef ALGEBRA_H
#define ALGEBRA_H
#include <iostream>
#include <cmath>
using namespace std;

class Algebra
{
private:
	int a;
	int b;
	int c;
public:
	int geta();
	int getb();
	int getc();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
	Algebra(int num1, int num2, int num3);
};

#endif
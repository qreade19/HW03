#include "Algebra.h";

Algebra::Algebra(int num1, int num2, int num3) {
	a = num1;
	b = num2;
	c = num3;
}

int Algebra::geta()
{
	return a;
}

int Algebra::getb()
{
	return b;
}

int Algebra::getc()
{
	return c;
}

double Algebra::getDiscriminant()
{
	return (b*b) - (4 * a*c);
}

double Algebra::getRoot1()
{
	if (getDiscriminant() < 0) {
		return 0;
	}
	else {
		return (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	}
}

double Algebra::getRoot2()
{
	return (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
}
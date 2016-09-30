#include "EvenNumber.h";

EvenNumber::EvenNumber()
{
	value = 0;
}

EvenNumber::EvenNumber(int newNum)
{
	value = newNum;
}

int EvenNumber::getValue()
{
	return value;
}

int EvenNumber::getNext()
{
	return value + 2;
}

int EvenNumber::getPrevious()
{
	return value - 2;
}
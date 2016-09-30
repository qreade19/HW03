#pragma once
#ifndef EVENNUMBER_H
#define EVENNUMBER_H
#include <iostream>
using namespace std;

class EvenNumber
{
private:
	int value;
public:
	EvenNumber();
	EvenNumber(int newNum);
	int getValue();
	int getNext();
	int getPrevious();
};

#endif
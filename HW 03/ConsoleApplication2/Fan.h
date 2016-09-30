#pragma once
#ifndef FAN_H
#define FAN_H
#include <iostream>
using namespace std;

class Fan
{
private:
	int speed;
	bool on;
	double radius;

public:
	void ChangeFanSpeed(int fanSpeed);
	void TurnOn(bool button);
	void FanSize(double size);
	bool isOn();
	int getSpeed();
	double getRadius();
	Fan();
};

#endif
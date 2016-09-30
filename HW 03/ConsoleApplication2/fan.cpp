#include "Fan.h"

Fan::Fan() {
	speed = 1;
	on = false;
	radius = 5;
} // Sets a basic setting for when nothing is specified

void Fan::ChangeFanSpeed(int fanSpeed) {
	if (fanSpeed >= 1 && fanSpeed <= 3)
		speed = fanSpeed;
} // Creates a way to change the speed of the fan while keeping a specific framework that the new speed must be within.

void Fan::TurnOn(bool button) {
	on = button;
} // Simple. True = on, false = off.

void Fan::FanSize(double size) {
	if (size > 0)
		radius = size;
} // The requirement was placed to prevent the impossible radii of 0 or negative

bool Fan::isOn()
{
	return on;
}

int Fan::getSpeed()
{
	return speed;
}

double Fan::getRadius()
{
	return radius;
}
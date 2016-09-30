#include "Fan.h"
#include "Algebra.h"
#include "EvenNumber.h"
#include "Sort.h"
#include "MyInteger.h"

#include <iostream>
#include <string>
using namespace std;

// Sort calculations
string sort(string& s)
{
	string str = s;
	for (int i = 0; i < str.length(); i++) { // The first loop sets up each letter to be swapped, only moving on when successful.
		int smallest = i;
		for (int k = i + 1; k < str.length(); k++) { // The second loop goes over every other letter in the string to find a letter that comes before the currently selected one. 
			if (str[k] < str[smallest])
			{
				smallest = k;
			}
		}
		// Finally comes the bit of code that actually takes the newfound smallest letter and swaps it with the one that's currently selected.
		char temp = str[i];
		str[i] = str[smallest];
		str[smallest] = temp;
		// This repeats until the entire word is sorted.
	}
	return str;
}

int main()
{
	// Fan execution code
	Fan fan1;
	fan1.ChangeFanSpeed(3);
	fan1.FanSize(10);
	fan1.TurnOn(true);

	Fan fan2;
	fan2.ChangeFanSpeed(2);
	fan2.FanSize(5);
	fan2.TurnOn(false);

	cout << "Fan 1 being on is " << fan1.isOn() << ". Its speed is " << fan1.getSpeed() << ". It has a radius of " << fan1.getRadius() << "." << endl;
	cout << "Fan 2 being on is " << fan2.isOn() << ". Its speed is set to " << fan2.getSpeed() << ". It has a radius of " << fan2.getRadius() << "." << endl;

	// Algebra execution code
	int num1;
	int num2;
	int num3;
	cout << "Enter the first number in the quadratic equation: ";
	cin >> num1;
	cout << "Enter the second number in the quadratic equation: ";
	cin >> num2;
	cout << "Enter the third number in the quadratic equation: ";
	cin >> num3;
	Algebra Algebra(num1, num2, num3);
	double desc = Algebra.getDiscriminant();
	if (desc > 0) {
		cout << "The roots are " << Algebra.getRoot1() << " and " << Algebra.getRoot2() << "." << endl;
	}
	else if (desc == 0) {
		cout << "The root is " << Algebra.getRoot1() << endl;
	}
	else {
		cout << "This equation has no real roots." << endl;
	}

	// EvenNumber execution code
	EvenNumber Even(16);
	cout << "The current number is " << Even.getValue() << ". The next even number is " << Even.getNext() << ". The previous even number was " << Even.getPrevious() << "." << endl;

	// Sort execution code
	string entry;
	cout << "Enter any word: ";
	cin >> entry;
	string result = sort(entry);
	cout << "The sorted word is: " << result << "." << endl;

	// MyInteger execution code
	MyInteger Value1(2);
	MyInteger Value2(9);
	const MyInteger object(10);
	const string str("Welcome");
	cout << Value1.getValue() << " " << Value2.getValue() << endl;
	cout << Value1.isEven() << " " << Value2.isEven() << endl;
	cout << Value1.isOdd() << " " << Value2.isOdd() << endl;
	cout << Value1.isPrime() << " " << Value2.isPrime() << endl;
	cout << Value1.isEven(2) << " " << Value2.isEven(9) << endl;
	cout << Value1.isOdd(2) << " " << Value2.isOdd(9) << endl;
	cout << Value1.isPrime(2) << " " << Value2.isPrime(9) << endl;
	cout << Value1.isEven(object) << endl;
	cout << Value1.isOdd(object) << endl;
	cout << Value1.isPrime(object) << endl;
	cout << Value1.equals(2) << endl;
	cout << Value1.equals(object) << endl;
	cout << Value1.parseInt(str) << endl;
	return 0;
}
#include <iostream>
#include "Fraction.h"
using namespace std;
int dog();
Fraction InputFraction();

int main()
{
	Fraction A, B, result;
	cout << "For Fraction A" << endl;
	A = InputFraction();
	cout << "For Fraction B" << endl;
	B = InputFraction();

	cout << "A-B" << endl;
	result = A - B;
	result.Print();

	cout << "A+B" << endl;
	result = A + B;
	result.Print();

	cout << "A*B" << endl;
	result = A*B;
	result.Print();

	cout << "A/B" << endl;
	result = A / B;
	result.Print();
}

Fraction InputFraction() //Funtion to enter Fractions
{
	int temp;
	Fraction tempF;
	cout << "Enter the whole number Part of this Fraction" << endl;
	cin >> temp;
	tempF.SetWholeNumber(temp);
	cout << "Enter Numerator of Fraction:" << endl;
	cin >> temp;
	tempF.SetNumerator(temp);
E:
	cout << "Enter Denominator of Fraction:" << endl;
	cin >> temp;
	if (temp == 0)
	{
		cout << "You cannot have a denominator as Zero!" << endl;
		goto E;
	}
	tempF.SetDenominator(temp);

	return tempF;
}
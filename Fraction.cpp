#include "Fraction.h"
#include <iostream>
using namespace std;


Fraction::Fraction() //Constructor
{
	numerator = 1;
	denominator = 1;
}
Fraction::~Fraction() //Destructor
{
	numerator = 0;
	denominator = 0;
}

void Fraction::SetDenominator(int den) //Set Denominator
{
	denominator = den;
}
void Fraction::SetNumerator(int num) //Set Numerator
{
	numerator = num;
}
void Fraction::SetWholeNumber(int whole)
{
	wholeNumber = whole;
}


void Fraction::Print()
{
	simplify();
	if (wholeNumber != 0)
	{
		if (numerator != 0)
		{
			cout << wholeNumber << "  " << numerator << "/" << denominator << endl;
		}
		else cout << wholeNumber << endl;
	}
	else
	{
		if (numerator != 0)
		{
			cout << numerator << "/" << denominator << endl;
		}
		else cout << "0" << endl;
	}


}

void Fraction::simplify() //simplify fractions whose fractional part is not a fraction
{
	int test = numerator % denominator;
	if (test == 0)
	{
		wholeNumber = wholeNumber + (numerator / denominator);
		numerator = 0;
	}

}

Fraction Fraction::operator+(Fraction &in) //addition with operator overloading
{
	Fraction result;
	result.wholeNumber = wholeNumber + in.wholeNumber;
	result.numerator = numerator*in.denominator + in.numerator*denominator;
	result.denominator = denominator*in.denominator;
	return result;
}
Fraction Fraction::operator-(Fraction &in) //subtraction with operator overloading
{
	Fraction result;
	result.wholeNumber = wholeNumber - in.wholeNumber;
	result.numerator = numerator*in.denominator - denominator*in.numerator;
	result.denominator = denominator*in.denominator;
	return result;
}
Fraction Fraction::operator*(Fraction &in) //multiplication with operator overloading
{
	Fraction result;
	result.wholeNumber = wholeNumber * in.wholeNumber;
	result.numerator = numerator*in.numerator;
	result.denominator = denominator*in.denominator;
	return result;
}
Fraction Fraction::operator/(Fraction &in) //division with operator overloading
{
	Fraction result;
	result.wholeNumber = wholeNumber / in.wholeNumber;
	result.numerator = numerator*in.denominator;
	result.denominator = denominator*in.numerator;
	return result;
}

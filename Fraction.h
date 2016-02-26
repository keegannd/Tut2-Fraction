#pragma once
class Fraction
{
private:
	int numerator, denominator, wholeNumber;
	void simplify();
public:
	Fraction();
	~Fraction();
	void SetWholeNumber(int);
	void SetDenominator(int);
	void SetNumerator(int);
	void Print();
	Fraction operator+(Fraction &); // + Operator Overload
	Fraction operator-(Fraction &); // - Operator Overload
	Fraction operator*(Fraction &); // * Operator Overload
	Fraction operator/(Fraction &); // / Operator Overload
};
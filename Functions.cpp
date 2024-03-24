#include <iostream>
#include "Fraction.h"
using namespace std;

void Fraction::SetFraction(int num, int denom) {
	numerator = num;
	denominator = denom;
}

void Fraction::Add(const Fraction& other) {
	numerator = numerator * other.denominator + other.numerator * denominator;
	denominator *= other.denominator;
}

void Fraction::Subtract(const Fraction& other) {
	numerator = numerator * other.denominator - other.numerator * denominator;
	denominator *= other.denominator;
}

void Fraction::Multiply(const Fraction& other) {
	numerator *= other.numerator;
	denominator *= other.denominator;
}

void Fraction::Divide(const Fraction& other) {
	numerator *= other.denominator;
	denominator *= other.numerator;
}

int GCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void Fraction::Simplify() {
	int gcd = GCD(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
}

void Fraction::PrintResult() {
	cout << numerator << "/" << denominator << endl;
}
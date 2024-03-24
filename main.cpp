#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
	Fraction frac1, frac2;
	int num, denom;
	char choice = '+';
	do {
		system("cls");
		cout << "Enter the operation (+, -, *, /): ";
		cin >> choice;
		cout << "Enter numerator for fraction1: ";
		cin >> num;
		cout << "Enter denominator for fraction1: ";
		cin >> denom;
		frac1.SetFraction(num, denom);
		cout << "Enter numerator for fraction2: ";
		cin >> num;
		cout << "Enter denominator for fraction2: ";
		cin >> denom;
		frac2.SetFraction(num, denom);
		switch (choice) {
		case '+':
			frac1.Add(frac2);
			if (denom != 0) {
				cout << "Result of adding: ";
				frac1.Simplify();
				frac1.PrintResult();
			}
			else
				cout << "Error: Dividing by zero." << endl;
			break;
		case '-':
			frac1.Subtract(frac2);
			if (denom != 0) {
				cout << "Result of subtracting: ";
				frac1.Simplify();
				frac1.PrintResult();
			}
			else
				cout << "Error: Dividing by zero." << endl;
			break;
		case '*':
			frac1.Multiply(frac2);
			if (denom != 0) {
				cout << "Result of multiplying: ";
				frac1.Simplify();
				frac1.PrintResult();
			}
			else
				cout << "Error: Dividing by zero." << endl;
			break;
		case '/':
			frac1.Divide(frac2);
			if (denom != 0) {
				cout << "Result of dividing: ";
				frac1.Simplify();
				frac1.PrintResult();
			}
			else
				cout << "Error: Dividing by zero." << endl;
			break;
		default:
			cout << "Error: uncorrect operation. Write again." << endl;
		}
		system("pause");
	} while (true);
	return 0;
}
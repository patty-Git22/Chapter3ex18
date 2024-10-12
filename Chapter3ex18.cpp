/*
Title: Chapter 3 exercise 18 - Interest Earned
File name: Chapter3ex18.cpp
Programmer: Patrick Maloon
Date 10/12/2024

Requiremnets:
Write a program that asks for the principal, interest rate, 
and the number of times the interest is compounded.
*/

#include <iostream>
#include<iomanip>;
#include<cmath>;
using namespace std;

int main()
{
	double PRINCIPAL, INTEREST_RATE, COMPOUNDED_AMOUNT;

	cout << "What is your savings account balance? \n";
	cin >> PRINCIPAL;
	cout << "What is the annual interest rate of your savins account? \n";
	cin >> INTEREST_RATE;
	INTEREST_RATE /= 100;
	cout << "How many times as your savings account been compounded? \n";
	cin >> COMPOUNDED_AMOUNT;

	double INTEREST = 1 + (INTEREST_RATE / COMPOUNDED_AMOUNT);
	double AMOUNT = PRINCIPAL * pow(INTEREST, COMPOUNDED_AMOUNT);

	cout << "Interest Rate: " << INTEREST_RATE * 100 << endl;
	cout << "Times Compounded: " << COMPOUNDED_AMOUNT << endl;
	cout << "Principal: $" <<PRINCIPAL << endl;
	std::cout << std::fixed << std::setprecision(2) << "Interest Accrued $"<<AMOUNT - PRINCIPAL << std::endl;
	cout << "Amount in Savings Account $" << AMOUNT << endl;

	return 0;
}
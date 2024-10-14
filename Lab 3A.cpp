/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:3A
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
	
	float amount_O, APR, M_P, Minimum_P, APR_D;

	cout << "Amount owed: $";
	cin >> amount_O;

	cout << "APR: ";
	cin >> APR;

	M_P = (APR/12);
	APR_D = APR/100;
	Minimum_P = (amount_O*APR_D)/12;

	cout << "Monthly percentage rate: " << fixed << setprecision(3) << M_P;
	cout << "\nMinimum payment: $" << fixed << setprecision(2) << Minimum_P << endl;
}
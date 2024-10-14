
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:1A
*/

#include <iostream>
using namespace std;

int main()
{
	int miles;
	 double gallons, mpg;
	cout << "Enter the number of miles: ";
	cin >> miles;
	cout << "Enter the gallons of fuel used: ";
	cin >> gallons;
	mpg = miles / gallons;
	cout << "Miles Per Gallon: " << mpg << endl << endl;
	return 0;
}
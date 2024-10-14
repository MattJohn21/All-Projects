

/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:1A
*/


#include <string>
#include <iostream>
using namespace std;

int main()
{
	string message;
	cout << "Enter a line of text: ";
	getline(cin, message);
	cout << "You wrote'" << message << "'" << endl;
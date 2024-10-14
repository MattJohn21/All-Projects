/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:2A
*/


#include <iostream>

using namespace std;

int main()
{
	string name;
	string anotherName;
	string verb;
	string adverb;

	cout << "Enter a name: ";
	cin >> name;

	cout << "Enter another name: ";
	cin >> anotherName;

	cout << "Enter a verb: ";
	cin >> verb;

	cout << "Enter an adverb: ";
	cin >> adverb;

	cout << "Once upon a time, there was a person named " << name << " who had a child named " << anotherName << ". This child would " << verb << " " << adverb << " while singing to strangers." << endl;
	return 0;
}
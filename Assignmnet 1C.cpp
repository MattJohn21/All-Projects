/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:1C
*/


#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    string monthString;

 
    cout << "Enter the day (number): ";
    cin >> day;

    cout << "Enter the month (number): ";
    cin >> month;

    cout << "Enter the month (String): ";
    cin >> monthString;

    cout << "Enter the year (number): ";
    cin >> year;

    cout << "Here are some ways to represent the date:" << endl;
    cout << month << "/" << day << "/" << year << endl;
    cout << year << "/" << month << "/" << day << endl;
    cout << day << "/" << month << "/" << year << endl;
    cout << monthString << " " << day << ", " << year << endl;
    cout << day << " " << monthString << " " << year << endl;

    return 0;
}
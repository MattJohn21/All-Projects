
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:4B
*/

#include <iostream>
#include <string>


using namespace std;

int main() {
    string day;
    cout << "Enter the day: ";
    cin >> day;
    for (int i = 0; i < day.length(); i++)
    {
        day[i] = tolower(day[i]);
    }
    if (day == "monday" || day == "wednesday") {
        cout << "I have class today!" << endl;
    }
    else if (day == "friday") {
        cout << "It's Friday! Friday ! Gotta get down on Friday!" << endl;
    }
    else {
        cout << "I should use this time to do my homework." << endl;
    }
    return 0;
}
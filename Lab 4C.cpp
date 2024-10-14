/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:4C
*/


#include <iostream>
#include <cmath>
using namespace std;

class Lab4C {
public:
    static void run() {
        double num;
        int choice;
        cout << "Welcome! Please input a number: ";
        cin >> num;

        cout << "What would you like to do to this number:" << endl;
        cout << "0) Get the additive inverse of the number" << endl;
        cout << "1) Get the reciprocal of the number" << endl;
        cout << "2) Square the number" << endl;
        cout << "3) Cube the number" << endl;
        cout << "4) Exit the program" << endl;
        cin >> choice;

        switch (choice) {
        case 0:
            cout << "The additive inverse of " << num << " is " << -num << endl;
            break;
        case 1:
            cout << "The reciprocal of " << num << " is " << 1 / num << endl;
            break;
        case 2:
            cout << "The square of " << num << " is " << pow(num, 2) << endl;
            break;
        case 3:
            cout << "The cube of " << num << " is " << pow(num, 3) << endl;
            break;
        case 4:
            cout << "Thank you, goodbye!" << endl;
            break;
        default:
            cout << "Invalid input, please try again!" << endl;
            break;
        }
    }
};

int main() {
    Lab4C::run();
    return 0;
}
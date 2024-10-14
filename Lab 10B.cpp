
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:10B
*/


#include <iostream>
using namespace std;

bool isValid(double width, double height) {
    return (width + height) > 30.0;
}

double area(double width, double height) {
    return width * height;
}

double perimeter(double width, double height) {
    return 2 * (width + height);
}

int main() {
    char choice;
    do {
        double width, height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;

        if (isValid(width, height)) {
            cout << "This is a valid rectangle" << endl;
            cout << "The area is: " << area(width, height) << endl;
            cout << "The perimeter is: " << perimeter(width, height) << endl;
        }
        else {
            cout << "This is an invalid rectangle" << endl;
        }

        cout << "Do you want to enter another width and height (Y/N)? : ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "Program Ends" << endl;
    return 0;
}
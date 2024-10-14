/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:3A
*/

#include <iostream>
#include <string>

using namespace std;

class Assignment3A {
public:
    void run() {
        double xCoordinate, yCoordinate;

        cout << "[Cretaceous Park GIS]" << endl;
        cout << "X Coordinate: ";
        cin >> xCoordinate;
        cout << "Y Coordinate: ";
        cin >> yCoordinate;

        if (xCoordinate < 0 || xCoordinate > 10 || yCoordinate < -20 || yCoordinate > 20) {
            cout << "WARNING: You have left the boundaries of the park. Please return immediately." << endl;
        }
        else if (xCoordinate >= 0 && xCoordinate <= 10 && yCoordinate >= 0 && yCoordinate <= 10) {
            cout << "You are at the Visitor's Center" << endl;
        }
        else if (xCoordinate >= 0 && xCoordinate <= 10 && yCoordinate >= 10 && yCoordinate <= 20) {
            cout << "You are at the T. Rex Lake" << endl;
        }
        else if (xCoordinate >= 10 && xCoordinate <= 20 && yCoordinate >= 0 && yCoordinate <= 10) {
            cout << "You are at the Velociraptor Valley" << endl;
        }
        else {
            cout << "You are at the Triceratops Territory" << endl;
        }
    }
}

int main() {
    Assignment3A assignment;
    assignment.run();

    return 0;
}
   
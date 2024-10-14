
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:12A
*/


#include <iostream>
#include <string>

using namespace std;

class Chair {
public:
    int numOfLegs;
    bool rolling;
    string material;

    
    Chair(int legs, bool isRolling, string mat) {
        numOfLegs = legs;
        rolling = isRolling;
        material = mat;
    }
};

class Lab12A {
public:
    static void main() {
        int legs;
        bool isRolling;
        string mat;

        cout << "You are about to create a chair." << endl;
        cout << "How many legs does your chair have: ";
        cin >> legs;
        cout << "Is your chair rolling (true/false): ";
        cin >> isRolling;
        cout << "What is your chair made of: ";
        cin >> mat;

        
        Chair myChair(legs, isRolling, mat);

        
        cout << "Your chair has " << myChair.numOfLegs << " legs, is ";
        if (myChair.rolling) {
            cout << "rolling";
        }
        else {
            cout << "not rolling";
        }
        cout << ", and is made of " << myChair.material << "." << endl;

        
        myChair.numOfLegs = 4;
        myChair.rolling = false;
        myChair.material = "wood";

        
        cout << "This program is going to change that." << endl;
        cout << "Your chair has " << myChair.numOfLegs << " legs, is ";
        if (myChair.rolling) {
            cout << "rolling";
        }
        else {
            cout << "not rolling";
        }
        cout << ", and is made of " << myChair.material << "." << endl;
    }
};

int main() {
    Lab12A::main();
    return 0;
}
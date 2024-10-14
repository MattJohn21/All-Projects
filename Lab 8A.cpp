/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:8A
*/

#include <iostream>

using namespace std;

Instructor
| 03/27 at 11:02 am
Grading comment:
Please check the formatting while writing cout statements

class Lab8A {
public:
    void run() {
        int array1[5];
        int array2[5];
        int result[5];

        cout << "Please enter 5 integers for the first array:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Integer " << (i + 1) << ": ";
            cin >> array1[i];
        }

        cout << "Please enter 5 integers for the second array:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Integer " << (i + 1) << ": ";
            cin >> array2[i];
        }

        for (int i = 0; i < 5; i++) {
            result[i] = array1[i] + array2[i];
        }

        cout << "The resulting sums are ";
        for (int i = 0; i < 5; i++) {
            cout << result[i];
            if (i < 4) {
                cout << "|";
            }
        }
        cout << endl;
    }
};

int main() {
    Lab8A lab;
    lab.run();
    return 0;
}
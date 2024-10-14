
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:7B
*/
#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "\nPlease enter a value for the size: ";
    cin >> size;
    cout << "\nThis is the requested " << size << "X" << size << " right-triangle: \n";

    for (int i = 1; i <= size; i++) {
        cout << "\n";
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
    }
}
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:4A
*/
#include <iostream>
using namespace std;

int main() {
    int choice, start, end;
    cout << "What loop do you want to use?" << endl;
    cout << "1) A loop that might run zero or more times" << endl;
    cout << "2) A loop that will always run at least once" << endl;
    cout << "3) A loop with a predetermined start and end" << endl;
    cout << "Your choice: ";
    cin >> choice;
    cout << "What's your start number? ";
    cin >> start;
    if (choice == 3) {
        cout << "What's your end number? ";
        cin >> end;
    }
    else {
        end = 0;
    }
    cout << "Counting: ";
    switch (choice) {
    case 1:
        while (start >= end) {
            cout << start << ", ";
            start--;
        }
        break;
    case 2:
        do {
            cout << start << ", ";
            start--;
        } while (start >= end);
        break;
    case 3:
        for (int i = start; i >= end; i--) {
            cout << i << ", ";
        }
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }
    cout << endl;
    return 0;
}
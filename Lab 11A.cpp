/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:11A
*/



#include <iostream>
#include <string>
using namespace std;

bool isEqualIgnoreCase(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    for (int i = 0; i < str1.length(); i++) {
        if (tolower(str1[i]) != tolower(str2[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string menu[] = { "Hello World", "Goodbye Moon", "Walking on Sunshine" };
    int menuSize = sizeof(menu) / sizeof(menu[0]);
    bool rerun = true;
    while (rerun) {
        cout << "Menu" << endl;
        for (int i = 0; i < menuSize; i++) {
            cout << i << ") " << menu[i] << endl;
        }
        cout << "What would you like to do: ";
        int choice;
        cin >> choice;
        if (choice < 0 || choice >= menuSize) {
            cout << "Invalid choice." << endl;
        }
        else {
            cout << menu[choice] << endl;
        }
        string response;
        cout << "Type YES to rerun. ";
        cin >> response;
        rerun = isEqualIgnoreCase(response, "yes");
    }
    cout << "Program Ends." << endl;
    return 0;
}


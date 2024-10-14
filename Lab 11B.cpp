
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:11B
*/



#include <iostream>
#include <string>

using namespace std;

bool has_length(const string& password) {
    return password.length() >= 8;
}

bool has_uppercase(const string& password) {
    for (char c : password) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

bool has_digit(const string& password) {
    for (char c : password) {
        if (isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool is_valid_password(const string& password) {
    bool length_flag = has_length(password);
    bool uppercase_flag = has_uppercase(password);
    bool digit_flag = has_digit(password);
    return length_flag && uppercase_flag && digit_flag;
}

int main() {
    string password;
    do {
        cout << "Enter a password: ";
        cin >> password;
        if (is_valid_password(password)) {
            cout << "Valid password" << endl;
        }
        else {
            cout << "Invalid password" << endl;
        }
        cout << "Check another password? (yes or no): ";
        string answer;
        cin >> answer;
        if (answer != "yes") {
            break;
        }
    } while (true);
    cout << "Program Ends" << endl;
    return 0;
}
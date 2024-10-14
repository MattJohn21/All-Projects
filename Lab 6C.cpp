
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {
    int value{ 1000 };
    char choice;
    cout << "Welcome!" << endl;
    cout << "You have $1000 in your account" << endl;
    do {
        cout << "\nMenu" << endl;
        cout << "0 - Make a deposit" << endl;
        cout << "1 - Make a withdrawal" << endl;
        cout << "2 - Display account value" << endl;
        cout << "\nPlease make a selection: ";
        int selection{ -1 };
        cin >> selection;
        if (selection == 0) {
            cout << "How much would you like to deposit? : ";
            int amount{ 0 };
            cin >> amount;
            value += amount;
            cout << "Your current balance is $" << value << endl;
        }
        else if (selection == 1) {
            cout << "How much would you like to withdraw? : ";
            int amount{ 0 };
            cin >> amount;
            value -= amount;
            cout << "Your current balance is $" << value << endl;
        }
        else if (selection == 2) {
            cout << "Your current balance is $" << value << endl;
        }
        else {
            cout << "Invalid entry, please try again." << endl;
        }
        cout << "Would you like to return to the main menu (Y/N)? : ";
        cin >> choice;
    } while (choice != 'n' && choice != 'N');

    cout << "Thank you for banking with us!" << endl;

return 0;
}
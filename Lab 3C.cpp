#include <istream>
using namespace std;
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:3C
*/


#include <iostream> 
using namespace std;
int main()
{

    int quarters, dimes, nickels, pennies, total_coins, dollars;

    cout << "Enter the number of quarters: ";
    cin >> quarters;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of nickels: ";
    cin >> nickels;

    cout << "Enter the number of pennies: ";
    cin >> pennies;

    cout << "\nYou entered " << quarters << " quarters." << endl;
    cout << "You entered " << dimes << " dimes." << endl;
    cout << "You entered " << nickels << " nickels." << endl;
    cout << "You entered " << pennies << " pennies." << endl;

    total_coins = (quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies * 1);

    dollars = total_coins / 100;

    cout << "\nYour total is " << dollars << " dollars and " << (total_coins - (dollars * 100)) << " cents." << endl;
    return 0;
}
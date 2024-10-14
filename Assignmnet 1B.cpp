/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:1B
*/



#include <iostream>
using namespace std;

int main() {
    string item1;
    int quantity1;
    double price1;
    double total_price1;

    string item2;
    int quantity2;
    double price2;
    double total_price2;
    double total_cost;

    cout << "What're you buying? ";
    cin >> item1;
    cout << "How many? ";
    cin >> quantity1;
    cout << "What do they cost? ";
    cin >> price1;

    total_price1 = quantity1 * price1;

    cout << "What else're you buying? ";
    cin >> item2;
    cout << "How many? ";
    cin >> quantity2;
    cout << "What do they cost? ";
    cin >> price2;

    total_price2 = quantity2 * price2;

    total_cost = total_price1 + total_price2;

    cout << "Your list:" << endl;
    cout << "----" << endl;
    cout << item1 << " (" << quantity1 << ")" << endl;
    cout << "$" << price1 << " ($" << total_price1 << " total)" << endl;
    cout << item2 << " (" << quantity2 << ")" << endl;
    cout << "$" << price2 << " ($" << total_price2 << " total)" << endl;
    cout << "Total Cost: $" << total_cost << endl;
    cout << "----" << endl;

    return 0;
}
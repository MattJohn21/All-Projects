

/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:2A
*/

#include<iostream>
using namespace std;
int main()
{
    int a, b, sum, differ, product, quotient, rem;

    cout << "Enter any two Numbers: ";
    cin >> a >> b;

   
    sum = a + b;
  
    differ = a - b;
    
    product = a * b;
  
    quotient = a / b;

    cout << "Enter a number to find the reminder: ";
    cin >> rem;

    cout << "\nFrist Number: " << a << endl;
    cout << "Second Number: " << b << endl;
    cout << "Number of Modulo Operation: " << rem << "\n\n";

    cout << a << " + " << b << " = " << sum << ". " << "The remainder if divided by " << rem << " is " << sum % rem << endl;
    cout << a << " - " << b << " = " << differ << ". " << "The remainder if divided by " << rem << " is " << differ % rem << endl;
    cout << a << " * " << b << " = " << product << ". " << "The remainder if divided by " << rem << " is " << product % rem << endl;
    cout << a << " / " << b << " = " << quotient << " (Approximately). " << "The remainder if divided by " << rem << " is " << quotient % rem << endl;
    return 0;
}
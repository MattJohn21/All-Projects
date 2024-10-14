/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:2C
*/

#include <iostream>
using namespace std;

int main()
{
    int width, height, A, P;

    cout << "Enter a width: ";
    cin >> width;

    cout << "Enter a height: ";
    cin >> height;

    P = 2 * (height + width);

    A = (height * width);

    cout << "The area is " << A;
    cout << "\nThe perimeter is " << P;

    return 0;
}

/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:6A
*/

#include <cstdlib>
#include <ctime>
#include <iostream> 

using namespace std;

class Lab6A
{
public:
    int findMax()
    {
        cout << "Please enter 10 numbers and this program will display the largest.\n\n";
        int number, largest = 0;
        for (int i = 1; i <= 10; i++)
        {
            cout << "Please enter number " << i << ": ";
            cin >> number;
            if (number > largest)
            {
                largest = number;
            }

        }

        return largest;
    }
};

int main()
{
    Lab6A obj;
    int largest_integer;
    largest_integer = obj.findMax();

    cout << "\nThe largest number was " << largest_integer;
}
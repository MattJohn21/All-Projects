/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:5B
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    
    switch (num % 2)
    {
        
    case 0:cout << "This number is divisible by 2" << endl; break;
        
    default:
        
        switch (num % 3)
        {
            
        case 0:cout << "This number is divisible by 3" << endl; break;
            
        default:
            
            switch (num % 5)
            {
                
            case 0:cout << "This number is divisible by 5" << endl; break;
                
            default:cout << "This number is undetermined" << endl;
            }
        }
    }
}
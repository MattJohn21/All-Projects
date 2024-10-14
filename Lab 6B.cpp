/*
Class:CSE 1321L
Section : WE1
Term : 2
Instructor : Nick Murphy
Name : Matthew Johnson
Lab# : 6B
*/

#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {
   
    srand((unsigned)time(0));

    int randomNumber;
    
    while (1) {
        cout << "Enter a number between 1 and 1000: ";
        cin >> randomNumber;
        if (randomNumber >= 1 && randomNumber <= 1000)
            break;
        else {
            cout << "Enter number between 1-1000\n";
        }
    }
    
    int guess = 0;
    while (1) {
        int random = 1 + (rand() % 1000);
        if (random == randomNumber)
            break;
        cout << "My guess was " << random << "\n";
        guess++;
    }
    
    cout << "\nI guessed the number was " << randomNumber << " and it only took me " << guess << " guesses.";
    return 0;
}
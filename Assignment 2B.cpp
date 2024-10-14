/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:2B
*/


#include <iostream>
using namespace std;

int main() {
    cout << "[Fast-Forward]" << endl;

    float originalTime;
    float speedFactor;
    cout << "What is the original video time? ";
    cin >> originalTime;

    cout << "What is the playback speed factor? ";
    cin >> speedFactor;

   
    int minute = originalTime;

   
    float second = originalTime - (float)minute;

   
    int originalTimeInSeconds = minute * 60 + second * 100;

    
    int newTimeInSeconds = (int)(originalTimeInSeconds / speedFactor);

    cout << "The new video time would be " << newTimeInSeconds << " second(s)." << endl;
    cout << "That saves you " << originalTimeInSeconds - newTimeInSeconds << " second(s) from the original video speed." << endl;

    return 0;
}
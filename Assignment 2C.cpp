/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:2C
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double DISTANCE_TO_MOON = 384.4e6; 
    const double Toothpicks = 0.02; 
    int Precision = 9;

    double meters;
    cout << "[Distance Calculator] How many meters? ";
    cin >> meters;
    if (meters <= 0) {
        cout << "Invalid Input";
        return 0;
    }

    double distance_to_moon = meters / DISTANCE_TO_MOON;
    double toothpicks = meters / Toothpicks;

    cout << meters << " meter(s) is..." << endl;
    cout << "... " << fixed << setprecision(Precision) << distance_to_moon << " distance from the Moon" << endl;
    cout << "... " << fixed << setprecision(0) << toothpicks << " toothpicks long " << endl;
    return 0;
}
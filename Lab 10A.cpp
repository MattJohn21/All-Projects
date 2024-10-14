/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:10A
*/


#include <iostream>
using namespace std;

int max(int x, int y) {
    return (x > y) ? x : y;
}

int min(int x, int y) {
    return (x < y) ? x : y;
}

float average(int x, int y) {
    return (float)(x + y) / 2.0;
}

int main() {
    int num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    int max_num = max(num1, max(num2, num3));
    int min_num = min(num1, min(num2, num3));
    float avg_num = average(num1, num2);

    cout << "Min is " << min_num << endl;
    cout << "Max is " << max_num << endl;
    cout << "Average is " << avg_num << endl;

    return 0;
}

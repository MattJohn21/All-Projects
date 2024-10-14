
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:9A
*/


#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

int linearSearch(int arr[], int target);

int main() {
    int arr[ARRAY_SIZE];

   
    cout << "Please enter 10 numbers:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Integer " << i + 1 << ": ";
        cin >> arr[i];
    }

    
    int target;
    cout << "What is the target number: ";
    cin >> target;

   
    int index = linearSearch(arr, target);

    
    if (index == -1) {
        cout << "The target is not in the set." << endl;
    }
    else {
        cout << "The target is in the set." << endl;
    }

    return 0;
}


int linearSearch(int arr[], int target) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;  
}
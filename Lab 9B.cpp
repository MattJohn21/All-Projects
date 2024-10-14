
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:9B
*/



#include <iostream>

using namespace std;


void BubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


bool BinarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        cout << "Low is " << low << endl;
        cout << "High is " << high << endl;
        cout << "Mid is " << mid << endl;

        if (arr[mid] == target) {
            return true;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        cout << "Searching" << endl;
    }

    return false;
}

int main() {
    const int SIZE = 11;
    int arr[SIZE];

    cout << "Please enter 11 numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Integer " << i + 1 << ": ";
        cin >> arr[i];
    }

    BubbleSort(arr, SIZE);

    cout << "The sorted set is: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target;
    cout << "What is the target number: ";
    cin >> target;

    if (BinarySearch(arr, SIZE, target)) {
        cout << "The target is in the set." << endl;
    }
    else {
        cout << "The target is not in the set." << endl;
    }

    return 0;
}

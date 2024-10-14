
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:6A
*/



#include <iostream>
#include <algorithm>
#include <chrono>
#include <random>

constexpr int ARRAY_SIZE = 1000019;

void linear_search(int* arr, int target)
{
    int i = ARRAY_SIZE - 1;
    while (i >= 0 && arr[i] != target) {
        i--;
    }
    int iterations = ARRAY_SIZE - 1 - i;
    std::cout << "Linear Search: " << iterations << " loop(s)\n";
}

void binary_search(int* arr, int target)
{
    int low = 0;
    int high = ARRAY_SIZE - 1;
    int mid;
    int guesses = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        guesses++;
        if (arr[mid] == target) {
            std::cout << "Binary Search: " << guesses << " guess(es)\n";
            return;
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
}

int main()
{
    
    int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = ARRAY_SIZE - i;
    }

    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, ARRAY_SIZE - 1);
    int target = arr[dis(gen)];

    
    auto start = std::chrono::high_resolution_clock::now();
    linear_search(arr, target);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration_linear = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    start = std::chrono::high_resolution_clock::now();
    binary_search(arr, target);
    end = std::chrono::high_resolution_clock::now();
    auto duration_binary = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    
    std::cout << "\n[Linear Vs. Binary Search]\nThe target value is " << target << "\n";
    if (duration_linear < duration_binary) {
        std::cout << "Linear Search is faster this time!\n";
    }
    else if (duration_linear > duration_binary) {
        std::cout << "Binary Search is faster this time!\n";
    }
    else {
        std::cout << "Both algorithms took the same amount of time.\n";
    }

    return 0;
}
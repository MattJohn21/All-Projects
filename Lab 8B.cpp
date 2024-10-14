/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:8B
*/

Instructor
| 03/27 at 11:02 am
Grading comment:
Please check the formatting while writing cout statements


#include <iostream>

using namespace std;

class Lab8B {
public:
    void run() {
        int rows, cols;

        cout << "Please enter the number of rows: ";
        cin >> rows;

        cout << "Please enter the number of columns: ";
        cin >> cols;

        int** array = new int* [rows];
        for (int i = 0; i < rows; i++) {
            array[i] = new int[cols];
        }

        int count = 1;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                array[i][j] = count;
                count++;
            }
        }

        cout << "I have " << rows << " rows and " << cols << " columns. I need to fill-up " << (rows * cols) << " spaces.\nThe " << rows << "x" << cols << " array:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << array[i][j];
                if (j < cols - 1) {
                    cout << "|";
                }
            }
            cout << endl;
        }

        for (int i = 0; i < rows; i++) {
            delete[] array[i];
        }
        delete[] array;
    }
};

int main() {
    Lab8B lab;
    lab.run();
    return 0;
}
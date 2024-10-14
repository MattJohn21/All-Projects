#include <iostream>

using namespace std;

class Lab8C {
private:
    int** array2D;
    int* array1D;
    int numRows, numCols, numCells;

public:
    void getInput() {
        cout << "Please enter the number of rows: ";
        cin >> numRows;
        cout << "Please enter the number of columns: ";
        cin >> numCols;

        numCells = numRows * numCols;
        array2D = new int* [numRows];

        for (int i = 0; i < numRows; i++) {
            array2D[i] = new int[numCols];
        }
    }

    void fillArray() {
        int count = 1;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                array2D[i][j] = count++;
            }
        }
    }

    void printArray2D() {
        cout << "The " << numRows << "x" << numCols << " array: " << endl;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                cout << array2D[i][j];

                if (j != numCols - 1) {
                    cout << "|";
                }
            }

            cout << endl;
        }
    }

    void flattenArray() {
        array1D = new int[numCells];

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                array1D[i * numCols + j] = array2D[i][j];
            }
        }
    }

    void printArray1D() {
        cout << "The " << numRows << "x" << numCols << " 2-D array flattened into a " << numCells << " cell 1-D array: " << endl;

        for (int i = 0; i < numCells; i++) {
            cout << array1D[i];

            if (i != numCells - 1) {
                cout << "|";
            }
        }

        cout << endl;
    }

    ~Lab8C() {
        for (int i = 0; i < numRows; i++) {
            delete[] array2D[i];
        }

        delete[] array2D;
        delete[] array1D;
    }
};

int main() {
    Lab8C lab8c;
    lab8c.getInput();
    lab8c.fillArray();
    lab8c.printArray2D();
    lab8c.flattenArray();
    lab8c.printArray1D();

    return 0;
}
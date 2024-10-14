
// 
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:4B
*/
#include <iostream>
#include <string>
using namespace std;

class Assignment4B {
public:
    void run() {

        int squareSize;
        do {
            cout << "Enter the size of the square: ";
            cin >> squareSize;
            if (squareSize <= 0) {
                cout << "Invalid input!" << endl;
            }
        } while (squareSize <= 0);


        int borderSize;
        do {
            cout << "Enter the size of the border: ";
            cin >> borderSize;
            if (borderSize < 0) {
                cout << "Invalid input!" << endl;
            }
        } while (borderSize < 0);


        int squareColor;
        do {
            cout << "Enter the color of the square: ";
            cin >> squareColor;
            if (squareColor != 0 && squareColor != 1) {
                cout << "Invalid input!" << endl;
            }
        } while (squareColor != 0 && squareColor != 1);


        int borderColor;
        do {
            cout << "Enter the color of the border: ";
            cin >> borderColor;
            if (borderColor != 0 && borderColor != 1) {
                cout << "Invalid input!" << endl;
            }
        } while (borderColor != 0 && borderColor != 1);

        int imageSize = squareSize + 2 * borderSize;
        cout << "P1" << endl;
        cout << imageSize << " " << imageSize << endl;
        for (int i = 0; i < imageSize; i++) {
            for (int j = 0; j < imageSize; j++) {
                if (i < borderSize || i >= borderSize + squareSize || j < borderSize || j >= borderSize + squareSize) {

                    cout << borderColor << " ";
                }
                else {

                    cout << squareColor << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Assignment4B program;
    program.run();
    return 0;
}
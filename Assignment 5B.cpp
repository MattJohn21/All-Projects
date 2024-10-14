/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:5B
*/


#include <iostream>
#include <fstream>

using namespace std;

const int MAX_WIDTH = 1000;
const int MAX_HEIGHT = 1000;

// function prototypes
void createImage(int image[MAX_HEIGHT][MAX_WIDTH], int width, int height, int color);
void printImage(int image[MAX_HEIGHT][MAX_WIDTH], int width, int height);
void fillPixel(int image[MAX_HEIGHT][MAX_WIDTH], int width, int height);
void fillLine(int image[MAX_HEIGHT][MAX_WIDTH], int width, int height);

int main() {
    int width, height, color;
    int image[MAX_HEIGHT][MAX_WIDTH];

    
    cout << "[KSU Image Manipulation Program]" << endl;
    cout << "Enter an image width: ";
    cin >> width;
    cout << "Enter an image height: ";
    cin >> height;
    cout << "Enter the fill color: ";
    cin >> color;

    
    createImage(image, width, height, color);

    
    int choice = 0;
    while (choice != 4) {
        cout << "What will you do?" << endl;
        cout << "1) Fill in a pixel" << endl;
        cout << "2) Fill in a line" << endl;
        cout << "3) Print the image" << endl;
        cout << "4) Quit" << endl;
        cout << "Choice? ";
        cin >> choice;

        
        switch (choice) {
        case 1:
            fillPixel(image, width, height);
            break;
        case 2:
            fillLine(image, width, height);
            break;
        case 3:
            printImage(image, width, height);
            break;
        case 4:
            cout << "[Exiting KSU Image Manipulation Program]" << endl;
            break;
        default:
            cout << "Invalid choice! Please choose again." << endl;
            break;
        }
    }

    return 0;
}


void createImage(int image[MAX_HEIGHT][MAX_WIDTH], int width, int height, int color) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            image[i][j] = color;
        }
    }
}


void printImage(int image[MAX_HEIGHT][MAX_WIDTH], int width, int height) {
    ofstream outputFile("image.pgm");

    outputFile << "P2" << endl;
    outputFile << width << " " << height << endl;
    outputFile << "255" << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            outputFile << image[i][j] << " ";
        }
        outputFile << endl;
    }

    outputFile.close();

    cout << "PGM Image Contents" << endl;
    cout << "P2" << endl;
    cout << width << " " << height << endl;
    cout << "255" << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
}


void fillPixel(int image[MAX_HEIGHT][MAX_WIDTH], int width, int height) {
    int x, y, color;
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y;
    cout << "Enter the new color: ";
    cin >> color;
    if (x >= 0 && x < width && y >= 0 && y < height) {
        image[y][x] = color;
        cout << "Pixel filled." << endl;
    }
    else {
        cout << "Invalid coordinates." << endl;
    }
}


void fillLine(int image[MAX_HEIGHT][MAX_WIDTH], int width, int height) {
    int x1, y1, x2, y2, color;
    cout << "Enter the starting x coordinate: ";
    cin >> x1;
    cout << "Enter the starting y coordinate: ";
    cin >> y1;
    cout << "Enter the ending x coordinate: ";
    cin >> x2;
    cout << "Enter the ending y coordinate: ";
    cin >> y2;
    cout << "Enter the new color: ";
    cin >> color;
    if (x1 >= 0 && x1 < width && y1 >= 0 && y1 < height &&
        x2 >= 0 && x2 < width && y2 >= 0 && y2 < height) {
        if (x1 == x2) {
           
            int startY = min(y1, y2);
            int endY = max(y1, y2);
            for (int y = startY; y <= endY; y++) {
                image[y][x1] = color;
            }
            cout << "Line filled." << endl;
        }
        else if (y1 == y2) {
           
            int startX = min(x1, x2);
            int endX = max(x1, x2);
            for (int x = startX; x <= endX; x++) {
                image[y1][x] = color;
            }
            cout << "Line filled." << endl;
        }
        else {
           
            cout << "Diagonal lines not supported." << endl;
        }
    }
    else {
        cout << "Invalid coordinates." << endl;
    }
}


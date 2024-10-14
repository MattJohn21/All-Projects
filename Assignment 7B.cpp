/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:7B
*/

#include <iostream>
#include <fstream>

using namespace std;

// Pixel class
class Pixel {
public:
    // Constructor
    Pixel() {
        red = green = blue = 255;
    }
    Pixel(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }
    // Functions
    void changeRGB(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }
    void printRGB() {
        cout << red << " " << green << " " << blue << " ";
    }
    // Attributes
    int red, green, blue;
};

// Function prototypes
void printImage(Pixel** image, int width, int height);
void fillPixel(Pixel** image, int width, int height);
void fillLine(Pixel** image, int width, int height);
void createPPM(Pixel** image, int width, int height);

int main() {
    // Get image dimensions and fill color from user
    int width, height, red, green, blue;
    cout << "[Color Art Program]" << endl;
    cout << "Enter an image width: ";
    cin >> width;
    cout << "Enter an image height: ";
    cin >> height;
    cout << "Enter the fill color's red value: ";
    cin >> red;
    cout << "Enter the fill color's green value: ";
    cin >> green;
    cout << "Enter the fill color's blue value: ";
    cin >> blue;

    // Create image array
    Pixel** image = new Pixel * [height];
    for (int i = 0; i < height; i++) {
        image[i] = new Pixel[width];
        for (int j = 0; j < width; j++) {
            image[i][j] = Pixel(red, green, blue);
        }
    }

    // Print menu and handle user input
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
            createPPM(image, width, height);
            break;
        case 4:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }

    // Free memory
    for (int i = 0; i < height; i++) {
        delete[] image[i];
    }
    delete[] image;

    return 0;
}

// Print the image
void printImage(Pixel** image, int width, int height) {
    cout << "PPM Image Contents P3" << endl;
    cout << width << " " << height << endl;
    cout << "255" << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            image[i][j].printRGB();
        }
        cout << endl;
    }
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:3B
*/

#include <iostream>
using namespace std;

class Assignment3B {
public:
    void determineEncoding(int width, int height, int fileSize) {
        if (width <= 0 || height <= 0 || fileSize <= 0) {
         cout << "The information is invalid - please re-enter it." << std::endl;
            return;
        }

        int bpc = (fileSize * 8) / (width * height * 3);
        switch (bpc) {
        case 8:
            cout << "The RGB image is encoded with 8 bits per channel." << std::endl;
            break;
        case 16:
            cout << "The RGB image is encoded with 16 bits per channel." << std::endl;
            break;
        case 32:
            cout << "The RGB image is encoded with 32 bits per channel." << std::endl;
            break;
        default:
            cout << "The information is invalid - please re-enter it." << std::endl;
            break;
        }
    }
};

int main() {
    Assignment3B assignment;
    int width, height, fileSize;
      cout << "[Image Encoding Checker] What is the image width? ";
      cin >> width;
      cout << "[Image Encoding Checker] What is the image height? ";
      cin >> height;
      cout << "[Image Encoding Checker] What is the file size (in bytes)? ";
      cin >> fileSize;
    assignment.determineEncoding(width, height, fileSize);
    return 0;
}
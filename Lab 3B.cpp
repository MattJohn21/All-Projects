/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:3B
*/


#include <iostream> 
using std::cout;
using std::cin;

int main() {
    float c_hrs1, c_hrs2, c_hrs3, c_hrs4;
    float grade1, grade2, grade3, grade4;

    cout << "Course 1 hours: ";
    cin >> c_hrs1;
    cout << "Grade for course 1: ";
    cin >> grade1;

    cout << "Course 2 hours: ";
    cin >> c_hrs2;
    cout << "Grade for course 2: ";
    cin >> grade2;

    cout << "Course 3 hours: ";
    cin >> c_hrs3;
    cout << "Grade for course 3: ";
    cin >> grade3;

    cout << "Course 4 hours: ";
    cin >> c_hrs4;
    cout << "Grade for course 4: ";
    cin >> grade4;

    float total_hrs = c_hrs1 + c_hrs2 + c_hrs3 + c_hrs4;
    cout << "Total hours is: " << total_hrs << '\n';

    float total_grade = c_hrs1 * grade1 + c_hrs2 * grade2 + c_hrs3 * grade3 + c_hrs4 * grade4;
    cout << "Total quality points is: " << total_grade << '\n';

    float gpa = total_grade / total_hrs;
    cout << "Your GPA for this semester is " << gpa << '\n';

    return 0;
}
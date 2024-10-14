/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:4A
*/

#include <iostream>
#include<string.h>
using namespace std;


class Lab4A
{
public:
    char grade[2];


    char* MarksToGrade(float marks)
    {
        if (marks >= 0 && marks <= 64)
            strcpy(grade, "F");
        else if (marks <= 67)
            strcpy(grade, "D-");
        else if (marks <= 70)
            strcpy(grade, "D");
        else if (marks <= 73)
            strcpy(grade, "D+");
        else if (marks <= 76)
            strcpy(grade, "C-");
        else if (marks <= 79)
            strcpy(grade, "C");
        else if (marks <= 82)
            strcpy(grade, "C+");
        else if (marks <= 85)
            strcpy(grade, "B-");
        else if (marks <= 88)
            strcpy(grade, "B");
        else if (marks <= 91)
            strcpy(grade, "B+");
        else if (marks <= 94)
            strcpy(grade, "A-");
        else if (marks <= 97)
            strcpy(grade, "A");
        else if (marks <= 100)
            strcpy(grade, "A+");

        return grade;
    }
};

int main()
{
    float marks;

    Lab4A obj;
    cout << "Enter the score of your exam: ";
    cin >> marks;

    cout << "\nLetter grade is: " << obj.MarksToGrade(marks);

    return 0;
}
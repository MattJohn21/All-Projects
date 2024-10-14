/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:5C
*/
#include<iostream>
using namespace std;
class Lab5C
{
public:
    int x, y;
    Lab5C(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void print()
    {
        if (x == 0 && y == 0)
        {
            cout << "This point is the origin." << endl;
        }
        else if (x == 0 || y == 0)
        {
            if (x == 0)
                cout << "This point is on the y axis." << endl;
            else
                cout << "This point is on the x axis." << endl;
        }
        else
        {
            if (x > 0 && y > 0)
            {
                cout << "This point is in the first quadrant." << endl;
            }
            else if (x < 0 && y>0)
            {
                cout << "This point is in the second quadrant." << endl;
            }
            else if (x < 0 && y < 0)
            {
                cout << "This point is in the third quadrant." << endl;
            }
            else if (x > 0 && y < 0)
            {
                cout << "This point is in the fourth quadrant." << endl;
            }
        }
    }
};
int main()
{
    int x, y;
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;
    Lab5C obj(x, y);
    obj.print();

}
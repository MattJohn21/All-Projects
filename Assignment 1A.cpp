
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:1A
*/

# include <iostream> 
# include <string>
using namespace std;

int main() {
	int redvalue, greenvalue, bluevalue, ired, igreen, iblue;

	cout << "Enter a red value (0 - 255): ";
	cin >> redvalue;

	cout << "Enter a green value (0 - 255): ";
	cin >> greenvalue;

	cout << "Enter a blue value (0 - 255): ";
	cin >> bluevalue;

	ired = 255 - redvalue;
	igreen = 255 - greenvalue;
	iblue = 255 - bluevalue;

	float iredf = ired / static_cast<float>(255);
	float igreenf = igreen / static_cast<float>(255);
	float ibluef = iblue / static_cast<float>(255);
	cout << "The inverted color is red=" << ired;
	cout << ", green=" << igreen << ", blue=" << iblue << "\n";
	cout << "With floating points, that would be red=" << iredf; cout << ", green=" << igreenf << ", blue=" << ibluef << endl;
}
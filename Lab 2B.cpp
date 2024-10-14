/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:2B
*/


#include<iostream>

using namespace std;

void print(int num_of_stars) {

	
	string middle_portion = "";
	for (int i = 0; i < num_of_stars; i++) {
		if (i == num_of_stars - 1)
			middle_portion += '*';
		else
			middle_portion += "*_";
	}

	int len = middle_portion.size();

	string underscores_before_and_after = "";
	for (int i = 0; i < (7 - len) / 2; i++)underscores_before_and_after += '_';


	string ans = underscores_before_and_after + middle_portion + underscores_before_and_after;


	cout << ans << endl;
}

int main() {


	for (int i = 1; i <= 4; i++)print(i);


	for (int i = 3; i >= 1; i--)print(i);
	return 0;
}
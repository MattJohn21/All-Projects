/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:5A
*/

#include <iostream>
#include <string>
using namespace std;

const int NUM_EMPLOYEES = 5;


int employeeID[NUM_EMPLOYEES] = { 0, 1, 2, 3, 4 };
string firstName[NUM_EMPLOYEES] = { "Mark", "Amanda", "Norman", "Steven", "Jesse" };
string lastName[NUM_EMPLOYEES] = { "Sloan", "Bentley", "Briggs", "Sloan", "Travis" };
int age[NUM_EMPLOYEES] = { 67, 33, 47, 35, 24 };
string occupation[NUM_EMPLOYEES] = { "Chief of Internal Medicine", "Pathologist", "Administrator", "Hospital Security", "Surgeon Intern" };
bool hasMedicalLicense[NUM_EMPLOYEES] = { true, true, false, false, true };


void displayAllEmployees() {
    cout << "All Employee Records:" << endl;
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "#" << i << ": " << firstName[i] << " " << lastName[i] << ", Age " << age[i] << ", " << occupation[i] << ", Medical License: " << (hasMedicalLicense[i] ? "TRUE" : "FALSE") << endl;
    }
}

void displayEmployeeByID() {
    int id;
    cout << "Enter an employee ID: ";
    cin >> id;
    if (id >= 0 && id < NUM_EMPLOYEES) {
        cout << "#" << id << ": " << firstName[id] << " " << lastName[id] << ", Age " << age[id] << ", " << occupation[id] << ", Medical License: " << (hasMedicalLicense[id] ? "TRUE" : "FALSE") << endl;
    }
    else {
        cout << "Invalid ID!" << endl;
    }
}


void displayEmployeeByLastName() {
    string lastNameToFind;
    bool foundEmployee = false;
    cout << "Enter a last name: ";
    cin >> lastNameToFind;
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        if (lastName[i] == lastNameToFind) {
            cout << "#" << i << ": " << firstName[i] << " " << lastName[i] << ", Age " << age[i] << ", " << occupation[i] << ", Medical License: " << (hasMedicalLicense[i] ? "TRUE" : "FALSE") << endl;
            foundEmployee = true;
        }
    }
    if (!foundEmployee) {
        cout << "No records found!" << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "[Community General Hospital Directory]" << endl;
        cout << "1) List all employees" << endl;
        cout << "2) Search employee records by ID" << endl;
        cout << "3) Search employee records by last name" << endl;
        cout << "4) Quit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            displayAllEmployees();
            break;
        case 2:
            displayEmployeeByID();
            break;
        case 3:
            displayEmployeeByLastName();
            break;
        case 4:
            cout << "[Closing Directory...]" << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
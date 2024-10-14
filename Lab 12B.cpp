

/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Lab#:12B
*/

#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    int age;
    double weight;
    string name;
    string furColor;
    string breed;

    void bark() {
        cout << "Woof! Woof!" << endl;
    }

    void rename(string newName) {
        name = newName;
    }

    void eat(double amount) {
        weight += amount;
    }
};

class Lab12B {
public:
    static void main() {
        Dog myDog;

        cout << "You are about to create a dog." << endl;
        cout << "How old is the dog: ";
        cin >> myDog.age;

        cout << "How much does the dog weigh: ";
        cin >> myDog.weight;

        cout << "What is the dog's name: ";
        cin >> myDog.name;

        cout << "What color is the dog: ";
        cin >> myDog.furColor;

        cout << "What breed is the dog: ";
        cin >> myDog.breed;

        cout << endl << myDog.name << " is a " << myDog.age << " year old " << myDog.furColor << " " << myDog.breed << " that weighs " << myDog.weight << " lbs." << endl;

        myDog.bark();

        double amountToEat;
        cout << myDog.name << " is hungry, how much should they eat: ";
        cin >> amountToEat;
        myDog.eat(amountToEat);

        string newName;
        cout << myDog.name << " isn't a very good name. What should they be renamed to: ";
        cin >> newName;
        myDog.rename(newName);

        cout << myDog.name << " is a " << myDog.age << " year old " << myDog.furColor << " " << myDog.breed << " that weighs " << myDog.weight << " lbs." << endl;
    }
};

int main() {
    Lab12B::main();
    return 0;
}



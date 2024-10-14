
/*
Class:CSE 1321L
Section:WE1
Term:2
Instructor:Nick Murphy
Name:Matthew Johnson
Assignment#:7A
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;


class RoshamboPlayer {
private:
    string playerName;
    string attack;
    int roLimit;
    int shamBoLimit;


public:
    RoshamboPlayer(string name, int ro, int shambo) {
        playerName = name;
        roLimit = ro;
        shamBoLimit = shambo;
    }


    bool playRound(string playerAttack) {
        
        int randNum = rand() % 101;
        if (randNum < roLimit) {
            attack = "Ro";
        }
        else if (randNum < shamBoLimit) {
            attack = "Sham";
        }
        else {
            attack = "Bo";
        }


        
        if (playerAttack == attack) {
            cout << playerName << " chose " << attack << "! Draw..." << endl;
            return false;  
        }
        else if ((playerAttack == "Ro" && attack == "Bo") ||
            (playerAttack == "Sham" && attack == "Ro") ||
            (playerAttack == "Bo" && attack == "Sham")) {
            cout << playerName << " chose " << attack << "! You lose..." << endl;
            return false;
        }
        else {
            cout << playerName << " chose " << attack << "! You win!" << endl;
            return true;
        }
    }


    string getName() {
        return playerName;
    }


    string getAttack() {
        return attack;
    }
};


int main() {
    
    srand(time(NULL));


    
    RoshamboPlayer p1("R. Dorothy", 30, 60);
    RoshamboPlayer p2("Johnny 5", 40, 85);


    
    int choice;
    cout << "[Ro-Sham-Bo Player]" << endl;
    cout << "Who do you want to face? 1) " << p1.getName() << " 2) " << p2.getName() << endl;
    cin >> choice;


    
    bool playing = true;
    while (playing) {
        if (choice == 1) {
            cout << "Your opponent is " << p1.getName() << "! ";
        }
        else {
            cout << "Your opponent is " << p2.getName() << "! ";
        }


        cout << "1) Play a round? 2) Quit?" << endl;
        cout << "Choice: ";
        cin >> choice;


        if (choice == 1) {
            string attack;
            cout << "Enter an attack: ";
            cin >> attack;


            
            while (attack != "Ro" && attack != "Sham" && attack != "Bo") {
                cout << "Invalid attack! Enter an attack: ";
                cin >> attack;
            }


            bool win;
            if (choice == 1) {
                if (choice == 1) {
                    win = p1.playRound(attack);
                }
                else {
                    win = p2.playRound(attack);
                }


                if (win) {
                    cout << "You won!" << endl;
                }
                else {
                    cout << "You lost..." << endl;
                }
            }
        }
        else {
            playing = false;
            cout << "Game Over" << endl;
        }

    }
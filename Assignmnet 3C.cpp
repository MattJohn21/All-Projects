#include <iostream>
using namespace std;
int main() {
    cout << "[[Cretaceous Park Dialog]" << endl;
    cout << "Oh no, the power has gone out at Cretaceous Park!" << endl;
    cout << "1)  What does that mean?" << endl;
    cout << "2) No, I just turned the light off." << endl;
    int ans, ans2;
    cin >> ans;
    if (ans == 1) {
        cout << "The dinosaurs will get loose... again..." << endl;
        cout << "1) Life finds a way..." << endl;
        cout << "2) What do we do? " << endl;
        cin >> ans2;
        if (ans2 == 1) {
            cout << "That's helpful right now!" << endl;
            cout << "We have to evacuate the park!" << endl;
            cin >> ans2;
            if (ans2 == 2) {
                cout << "Hooray!";
            }
            else {
                cout << "Then all is lost...";
            }
        }
        else {
            cout << "We have to evacuate the park!" << endl;
            
            }
           
    else {
        cout << "Oh thank goodness!";
    }


    return 0;
}
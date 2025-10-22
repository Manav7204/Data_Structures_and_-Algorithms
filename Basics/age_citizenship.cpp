#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string citizenship;
    cout << "Enter age: " << endl;
    cin >> age;

    cout << "Enter citizenship: " << endl;
    cin >> citizenship;

    if (age>=18 && citizenship == "Indian") {
        cout << "Eligible to vote" << endl;
    }
    else {
        cout << "Not eligible" << endl;
    }
    return 0;
}
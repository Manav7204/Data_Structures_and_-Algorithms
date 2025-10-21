#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    if ( num > 0) {
        for (int i=num; i >= 0; i--){
            cout << "" << i << endl;
        }
    }
    else if ( num < 0) {
        for (int i=num; i <= 0; i++){
            cout << "" << i << endl;
        }
    }
    else {
        cout << "0" << endl;
    }
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {       // row loop
        for (int j = 1; j <= i; j++) {   // column loop
            cout << "*";
        }
        cout << endl;                     // move to next line
    }

    return 0;
}

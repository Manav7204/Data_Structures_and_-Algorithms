#include <iostream>
using namespace std;

int fact(int x) {
    int factorial = 1;
    for (int i = 1; i <= x; i++){
        factorial = factorial*i;
    }

    return factorial;
}

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a ;

    if (a < 0){
        cout << "Negative number error!";
    }
    else {
        cout << fact(a);
    }
    return 0;
}
//Check Even or Odd
#include <iostream>
using namespace std;

bool evenOdd (int n) {
    if ((n % 2) == 0) {
        return true;
    }
    return false;
}

int main () {
    
    int num ;
    cin >> num;

    if (evenOdd(num)) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
    return 0;
}
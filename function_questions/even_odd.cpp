#include <iostream>
using namespace std;

int even_odd(int x) {
    return  x % 2;
}

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a ;
    
    if ( even_odd(a) == 0) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
    
    return 0;
}
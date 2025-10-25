#include <iostream>
using namespace std;

int value (int a, int b) {
    int sum = a+b;
    return sum;
}

int main() {
    int x, y;
    cout << "Enter the numbers: ";
    cin >> x >> y;
    cout << value(x,y);
    
    return 0;
}
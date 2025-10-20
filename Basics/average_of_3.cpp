#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter 3 numbers";
    cin >> a >> b >> c;

    float avg = (a+b+c)/3;

    cout << "Average: " << avg << endl;

    return 0;
}
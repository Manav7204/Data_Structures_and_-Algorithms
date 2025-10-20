#include <iostream>
using namespace std;

int main() {

    float celsius;
    cout << "Enter temperature in celsius: " << endl;
    cin >> celsius;

    float fahrenheit = ((celsius*9)/5)+32;

    cout << "Fahrenheit = " << fahrenheit << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b ;

    float sum = a+b;
    float difference = a-b;
    float product = a*b;
    float quotient = a/b;
    float remainder = fmod(a,b);

    cout << sum << " " << difference << " " << product << " " << quotient << " " << remainder << endl;
    return 0;
}
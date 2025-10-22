#include <iostream>
#include <string>
using namespace std;

int main() {

    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    string result = (a>b) ? "a is greater" : "b is greater";
    cout << "" << result << endl;

    return 0;
}
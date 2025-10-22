#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Enter number" << endl;
    cin >> a;

    string result = (a%2 == 0) ? "Even" : "Odd";
    cout << "" << result << endl;

    return 0;
}
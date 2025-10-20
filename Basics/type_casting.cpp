#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Integer: " << num << endl;
    cout << "As float: " << static_cast<float>(num) << endl;

    return 0;
}

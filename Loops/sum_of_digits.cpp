#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter num: " << endl;
    cin >> num;
    int sum = 0;

    while (num > 0){
        int digit = num%10;
        sum += digit;
        num /=10;
    }

    cout << sum << endl;

    return 0;
}

//This can also be done using for loop but in that case we need to first
// convert the number into a string so that i can be looped in.
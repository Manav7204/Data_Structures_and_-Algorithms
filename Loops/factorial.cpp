#include <iostream>
using namespace std;

int main() {
    long long factorial = 1;
    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    if (num < 0){
        cout << "Negative number !" << endl;
    }
    else {
        for (int i=1; i<=num; i++){
            factorial = factorial*i;
        }
    }
    cout << "" << factorial << endl;

    return 0;
}
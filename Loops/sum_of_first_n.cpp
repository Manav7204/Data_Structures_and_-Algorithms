#include <iostream>
using namespace std;

int main() {

    int range;
    int sum = 0;
    cout << "Enter range of natural numbers: " << endl;
    cin >> range;

    for (int i=1; i<=range; i++) {
        sum = sum+i;
    }
    
    cout << "" << sum << endl;
    return 0;
}
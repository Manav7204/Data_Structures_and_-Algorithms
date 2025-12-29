//sum of n natural numbers
#include <iostream>
using namespace std;

int sum_of_n (int n) {
    int sum = 0;
    for (int i = 0; i<=n; i++) {
        sum = sum+i;
    }
    return sum;
}

int main () {
    int num;
    cin >> num;

    cout << sum_of_n(num);
    return 0;
}
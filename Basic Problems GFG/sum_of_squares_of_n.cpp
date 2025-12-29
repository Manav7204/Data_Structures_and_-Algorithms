//Sum of squares of natural numbers

#include <iostream>
using namespace std;

int sum_of_sqr (int n) {
    int sum = 0;
    for (int i = 0; i<=n; i++) {
        sum = sum+(i*i);
    }
    return sum;
}

int main () {
    int num;
    cin >> num;

    cout << sum_of_sqr(num);
    return 0;
}
#include <iostream>
using namespace std;

void series(int x) {
    int a = 0, b = 1;

    cout << a << " " << b << " ";

    for (int i = 3; i <=x; i++){
        int next = a + b;
        a = b;
        b = next;

        cout << next << " ";

    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n ;

    series(n);
    return 0;
}
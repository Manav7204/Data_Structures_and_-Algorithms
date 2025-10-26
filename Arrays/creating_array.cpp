#include <iostream>
using namespace std;

int main() {

    int marks [5] = {99, 100, 75, 80, 54};

    int price [4] ;

    int size = sizeof(marks) / sizeof(int);

    for (int i = 0; i < size; i++) {
        cin >> price[i];
    }

    for (int i = 0; i < size; i++) {
        cout << price[i];
    }

    return 0;
}
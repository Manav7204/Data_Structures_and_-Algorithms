// Swap two numbers
#include <iostream>
using namespace std;

int main () {
    int a= 10, b = 20;
    
    // Using built in swap-
    swap(a,b);
    cout << a << " " << b << endl;

    //Using Third variable-
    int temp = a;
    a=b;
    b=temp;
    cout << a << " " << b << endl;

    // Using arithmetic opertors-
    a = a+b;
    b = a-b;
    a = a-b;
    cout << a << " " << b << endl;

    // Bitwise XOR-
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << endl;

    return 0; 
}
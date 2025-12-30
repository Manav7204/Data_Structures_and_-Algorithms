//Nth Term of AP
#include <iostream>
using namespace std;

//Using 'For' loop
// int nthTermOfAP(int a1,int a2, int n) {
//     int nth_term = a1;
//     int d = a2-a1;
//     for (int i = 1; i <n; i++) {
//         nth_term += d; 
//     }
//     return nth_term;
// }

//Formula based
int nthTermOfAP(int a1,int a2, int n) {
    int nth_term = a1 + (n -1) * (a2-a1);
    return nth_term;
}

int main () {
    int a1, a2, n;
    cin >> a1;
    cin >> a2;
    cin >> n;
    cout << nthTermOfAP(a1, a2, n);
    return 0;
}
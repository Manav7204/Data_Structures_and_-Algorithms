//Dice Problem

#include <iostream>
using namespace std;

//Naive approach
// int opposite_face(int n) {
//     int ans;
//     if (n == 1) {
//         ans = 6; 
//     }
//     else if (n == 2)
//     {
//         ans = 5;
//     }
//     else if (n == 3) {
//         ans = 4;
//     }
//     else if (n == 4) {
//         ans = 3;
//     }
//     else if (n == 5) {
//         ans = 2;
//     }
//     else if (n == 6) {
//         ans = 1;
//     }
    
//     return ans;
// }

//Using sum of two sides
int opposite_face(int n) {
    int ans = 7 - n;
    return ans;
}

int main () {
    int face_num;
    cin >> face_num;

    cout << opposite_face(face_num) << endl;
    return 0;
}
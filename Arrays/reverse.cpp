#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int rear = size-1;

    while (start < rear){
        swap( arr[start] , arr[rear]);
        start ++;
        rear --;

    // for (int start, rear; start < rear; start++, rear--) {
    //     swap(arr[start], arr[rear]);
    // }

    }
}
int main() {
    int arr [5] = {2, 5, 6, 32, 14};
    int size = 5;

    reverseArray(arr, size);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl; ;
    return 0;
}
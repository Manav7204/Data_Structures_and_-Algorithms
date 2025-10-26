#include <iostream>
using namespace std;

int main() {

    int arr [5] = {2, 5, 6, 32, 14};
    int num;
    cout << "Enter number to be searched: " << endl;
    cin >> num;

    for (int i = 0; i < 5; i++){
        if ( arr[i] == num ){
            cout << "Found " << num << " at index " << i << endl;
        }
    }
    return 0;
}
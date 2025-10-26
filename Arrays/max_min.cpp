#include <iostream>
using namespace std;

int min(int arr[], int n){
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int max(int arr[], int n){
    int largest = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main() {

    int num [10];
    cout << "Enter numbers in the array: " << endl;
    
    for (int i = 0; i < 10; i++){
        cin >> num[i];
    }

    int maximum = max(num, 10);
    int minimum = min(num, 10);

    cout << minimum << endl;
    cout << maximum << endl;

    return 0;
}
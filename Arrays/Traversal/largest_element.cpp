// Problem: Largest Element in an Array

// Given an array of integers arr of size N, find the largest element present in the array.

// Example 1
// Input:
// arr = [2, 5, 1, 3, 0]

// Output:
// 5
// Example 2
// Input:
// arr = [8, 10, 5, 7, 9]

// Output:
// 10
// Constraints
// 1 <= N <= 10^5
// -10^9 <= arr[i] <= 10^9

#include<iostream>
#include<vector>
using namespace std;

int check_largest(const vector<int>& arr)
{

    int largest = arr[0];

    for( auto it : arr)
    {
        if(it > largest)
        {
            largest = it;
        }
    }
    
    return largest;
}

int main()
{

    int n;
    vector<int> v;

    cout << "Enter the size of array:" << endl;
    cin >> n;

    cout << "Enter the array elements:" << endl;

    for (int i = 0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "The largest element is: " << check_largest(v);

    return 0;
}
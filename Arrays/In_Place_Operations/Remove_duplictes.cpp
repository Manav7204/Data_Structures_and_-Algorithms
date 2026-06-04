// Problem 4

// Topic: Arrays
// Pattern: In-Place Operations
// Folder: Arrays/In_Place_Operations/

// Problem: Remove Duplicates from Sorted Array

// Given a sorted array, remove the duplicates in-place and return the number of unique elements.

// Example 1
// Input:
// [1,1,2,2,3]

// Output:
// 3

// Array becomes:
// [1,2,3,...]
// Example 2
// Input:
// [1,1,1,1]

// Output:
// 1
// Example 3
// Input:
// [1,2,3,4]

// Output:
// 4
// Constraints
// Array is sorted.

#include<iostream>
#include<vector>
using namespace std;

int check_largest(const vector<int>& arr)
{

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

    cout << " " << endl;

    return 0;
}
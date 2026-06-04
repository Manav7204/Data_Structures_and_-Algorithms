// Problem 2

// Topic: Arrays
// Pattern: Traversal
// Folder: Arrays/Traversal/

// Problem: Second Largest Element

// Given an array of integers arr, find the second largest distinct element.

// If no second largest element exists, return -1.

// Example 1
// Input:
// [12, 35, 1, 10, 34, 1]

// Output:
// 34
// Example 2
// Input:
// [10, 10, 10]

// Output:
// -1
// Example 3
// Input:
// [5, 8]

// Output:
// 5
// Constraints
// 1 <= N <= 10^5
// -10^9 <= arr[i] <= 10^9

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int check_sec_largest(const vector<int>& arr)
{
    int largest = INT_MIN;
    int sec_largest = INT_MIN;

    if(arr.size() < 2)
    {
        return -1;
    }

    for( auto i : arr)
    {
        if(i > largest)
        {
            sec_largest = largest;
            largest = i;
        }
        else if(i > sec_largest && i < largest)
        {
            sec_largest = i;
        }
    }

    if (sec_largest == INT_MIN)
    {
    return -1;
    }

    return sec_largest;
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

    cout << "The second largest element is: " << check_sec_largest(v);

    return 0;
}
// Problem 5

// Topic: Arrays
// Pattern: Two Pointers
// Folder: Arrays/Two_Pointers/
// File Name: move_zeros_to_end.cpp

// Problem: Move All Zeros to End

// Given an integer array arr, move all 0s to the end of the array while maintaining the relative order of the non-zero elements.

// You must do this in-place.

// Example 1
// Input:
// [0,1,0,3,12]

// Output:
// [1,3,12,0,0]
// Example 2
// Input:
// [1,2,3]

// Output:
// [1,2,3]
// Example 3
// Input:
// [0,0,0,1]

// Output:
// [1,0,0,0]
// Example 4
// Input:
// [0,0,0]

// Output:
// [0,0,0]
// Constraints
// 1 <= N <= 10^5
// -10^9 <= arr[i] <= 10^9
// What This Problem Teaches
// Two Pointers
// In-place modification
// Maintaining relative order
// Foundation for many partitioning problems

#include <iostream>
#include <vector>
using namespace std;

vector<int> move_zeros(vector<int> &arr)
{
    int i = 0;
    int j = 0;

    if (arr.size() == 0)
    {
        cout << "Empty array" << endl;
    }
    else
    {
        while (j < arr.size())
        {
            if (arr[j] == 0)
            {
                j++;
            }
            else
            {
                arr[i] = arr[j];
                i++;
                j++;
            }
        }

        while(i<arr.size())
        {
            arr[i] = 0;
            i++;
        }
    }

    return arr;
}

int main()
{

    int n;
    vector<int> v;

    cout << "Enter the size of array:" << endl;
    cin >> n;

    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> result = move_zeros(v);

    cout << "Output: ";

    for (int x : result)
    {
        cout << x << ",";
    }

    return 0;
}
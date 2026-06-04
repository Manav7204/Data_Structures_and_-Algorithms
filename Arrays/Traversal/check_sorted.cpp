// Problem 3

// Topic: Arrays
// Pattern: Traversal
// Folder: Arrays/Traversal/

// Problem: Check if Array is Sorted

// Given an array arr of size N, determine whether the array is sorted in non-decreasing order.

// Return:

// true  -> if sorted
// false -> otherwise
// Example 1
// Input:
// [1, 2, 2, 3, 4]

// Output:
// true
// Example 2
// Input:
// [1, 3, 2, 4]

// Output:
// false
// Example 3
// Input:
// [-5, -2, -2, 0]

// Output:
// true
// Think Before Coding

// Instead of comparing every element with every other element:

// Ask:

// Is every element <= the next element?

// What happens the moment you find:

// arr[i] > arr[i+1]

// Can you stop early?

#include<iostream>
#include<vector>
#include<string>
using namespace std;

string check_sorted(const vector<int>& arr, int x)
{
    
    bool sorted = true;
    int i = 0;
    // int j = i+1;

    // while( j<x )
    // {
    //     if(arr[i]>arr[j])
    //     {
    //         sorted = false;
    //         break;
    //     }
    //     i++;
    //     j++;
    // }

    for( i ; i < x-1 ; i++ )
    {
        if(arr[i]>arr[i+1])
        {
            sorted = false;
            break;
        }
    }

    if(sorted)
    {
        return "true";
    }
    else
    {
        return "false";
    }
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

    cout << check_sorted(v, n) << endl;

    return 0;
}
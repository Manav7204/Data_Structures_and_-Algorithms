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

#include <iostream>
#include <vector>
using namespace std;

int count_of_elements(vector<int> &arr)
{
    if(arr.size() == 0)
    {
        return 0;
    }

    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i+1;
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

    cout << "Nummber of unique elements: " << count_of_elements(v) << endl;

    return 0;
}
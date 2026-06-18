// Pattern: In-Place Operations
// Folder: Arrays/In_Place_Operations/
// File Name: left_rotate_array_by_k_places.cpp

// Problem: Left Rotate Array by K Places

// Given an array arr of size N, rotate the array to the left by k positions.

// Example 1
// Input:
// arr = [1,2,3,4,5,6,7]
// k = 3

// Output:
// [4,5,6,7,1,2,3]
// Example 2
// Input:
// arr = [1,2,3,4,5]
// k = 7

// Output:
// [3,4,5,1,2]
// Think Before Coding

// You already solved:

// Left Rotate by 1

// A simple approach is:

// Call left_rotate_by_one() k times

// but that's inefficient.

// Think:

// What happens when k > n?
// Can you store the first k elements?
// Then shift the remaining elements left?
// Then place the stored elements at the end?
// Expected Complexity

// Target:

// Time: O(N)
// Space: O(K)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void left_rotate(vector<int> &arr, int k)
{
    k = k%arr.size();

    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());

}

int main()
{
    vector<int> v;
    int size;
    int temp;
    int no_rotations;

    cout << "Enter size of array: " << endl;
    cin >> size;

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    cout << "Enter the number of rotations: " << endl;
    cin >> no_rotations;

    if (v.empty())
    {
        return 0;
    }
    
    left_rotate(v, no_rotations);
    

    for (int i : v)
    {
        cout << i << " ";
    }
}
// Problem: Left Rotate Array by One Place

// Given an array arr of size N, rotate the array to the left by one position.

// Example 1
// Input:
// [1,2,3,4,5]

// Output:
// [2,3,4,5,1]
// Example 2
// Input:
// [10]

// Output:
// [10]
// Example 3
// Input:
// [7,8]

// Output:
// [8,7]
// Constraints
// 1 <= N <= 10^5
// What This Problem Teaches
// Element shifting
// In-place array modification
// Foundation for Rotate by K Places
// Think Before Coding

// For:

// [1,2,3,4,5]

// Ask yourself:

// Which element will be lost after shifting?
// Where should it be stored temporarily?
// How do you shift all remaining elements left by one position?

#include <iostream>
#include <vector>
using namespace std;

void left_shift(vector<int> &arr)
{   
    int temp = arr[0];

    for(int j = 1; j < arr.size(); j++)
    {
        arr[j-1] = arr[j];
    }

    arr[arr.size() - 1] = temp;
} 

int main()
{
    vector<int> v;
    int n;

    cout << "Enter number of elements" << endl;
    cin >> n;

    if(n == 0)
    {
        return 0;
    }

    cout << "Enter elements: " << endl;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    left_shift(v);

    cout << "The Shifted array: ";
    
    for(int k: v)
    {
        cout << k << " ";
    }

    return 0;
}
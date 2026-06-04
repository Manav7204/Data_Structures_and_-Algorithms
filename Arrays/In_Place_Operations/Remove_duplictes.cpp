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


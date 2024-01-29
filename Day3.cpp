/*
Day 3
MAXIMUM PRODUCT
Type - EASY

Given an array of integers nums,Implement a function to find the maximum product of two integers in an array.

Asked in Google, Meta, Adobe, and Amazone
*/

#include <bits/stdc++.h>
using namespace std;

int maxProductFinder(vector<int> arr)
{
    int n = arr.size();
    int maxProduct = -1;
    int product = 1;
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            product = arr[i] * arr[j];
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

int main()
{
    vector<int> arr = {1, 2, 3, -1, 9, 8, 4};
    int sol = maxProductFinder(arr);
    cout << sol;
    return 0;
}

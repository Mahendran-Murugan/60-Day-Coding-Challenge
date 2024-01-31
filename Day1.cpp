/*
Day 1
TWO SUM
Type - EASY

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

Asked in Google, Meta, Adobe, and Amazon
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sumOfTargetFinder(vector<int> arr, int target)
{
    int n = arr.size();
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == target)
        {
            return {left, right};
        }
        else
        {
            if (right - 1 == left)
            {
                left++;
                right = n - 1;
            }
            else
            {
                right--;
            }
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {1, 2, 3, -1, 9, 8, 4};
    vector<int> soln = sumOfTargetFinder(arr, 100);
    for (auto iter : soln)
    {
        cout << iter << " ";
    }
    return 0;
}

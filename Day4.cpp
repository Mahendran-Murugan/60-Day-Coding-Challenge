/*
    Day 4
    Monolithic Array or Not
    Type - EASY

    An array is monotonic if it is either monotone increasing or monotone decreasing.

    Asked in Google, Meta, Adobe, and Amazon
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        bool ascending = true;
        bool Descending = true;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
                ascending = false;
            if (nums[i] < nums[i + 1])
                Descending = false;
        }
        return ascending || Descending;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Solution s;
    bool sol = s.isMonotonic(arr);
    if (sol)
        cout << "True";
    else
        cout << "False";
    return 0;
}
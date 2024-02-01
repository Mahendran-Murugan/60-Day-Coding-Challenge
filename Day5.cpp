/*
 Day 5
 Create a function that will find the nth Fibonacci number using recursion.
 Reminder:
 F(0) = 0
 F(1) = 1
 F(n) = F(n-1) + F(n-2)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Fibo(int n)
    {
        if (n <= 1)
            return 1;
        return Fibo(n - 1) + Fibo(n - 2);
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout << s.Fibo(n + 1);
}
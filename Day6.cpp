/*
 Day 6
 Create a function that will return a Boolean
specifying if a number is prime.
*/

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    string s = (checkPrime(n)) ? "yes" : "no";
    cout << s;
    return 0;
}
/*
    Day 6

    Print the first 100 prime numbers
*/

#include <bits/stdc++.h>
using namespace std;

void printPrimeNo(int n)
{
    int i = 2;
    bool flag = true;
    int count = 0;
    while (count < n)
    {
        flag = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = !flag;
                break;
            }
        }
        if (flag || i == 2)
        {
            cout << i << " ";
            count++;
        }
        i++;
    }
}

int main()
{
    int n = 100;
    printPrimeNo(n);
    return 0;
}
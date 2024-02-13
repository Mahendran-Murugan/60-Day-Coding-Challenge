/*
    Day 10

    Print the Patter: eg:- n = 5

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    char c = 'a';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }
}
/*
    Day 9

    Print the Patter for String eg: abcd
    a
    aa
    ab
    aba
    abb
    abc
    abca
    abcb
    abcc
    abcd
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(string str, int n)
{
    string res = "";
    for (char ch : str)
    {
        for (int j = 97; j < 123; j++)
        {
            if (j == ch)
            {
                res += ch;
                cout << res << endl;
                break;
            }
            else
            {
                cout << res + (char)j << endl;
            }
        }
    }
}

int main()
{
    string str;
    cin >> str;
    cout << endl;
    printPattern(str, str.length());
    return 0;
}
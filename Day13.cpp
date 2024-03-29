/*
    Day 13

    Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
    Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

    (*>#): positive integer
    (#>*): negative integer
    (#=*): 0
    Example 1:
    Input 1:

    ###*   -> Value of S
    Output :

    0   → number of * and # are equal
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.length() - 1;
    int star = 0, hash = 0;
    while (len >= 0)
    {
        if (s[len] == '*')
        {
            star++;
        }
        else
        {
            hash++;
        }
        len--;
    }
    cout << star - hash;
    return 0;
}
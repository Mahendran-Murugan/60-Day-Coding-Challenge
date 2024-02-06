/*
    Day 8

    Print the Patter for String eg: January
    J a n u a r y
     a n u a r y
      n u a r y
       u a r y
        a r y
         r y
          y
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << str[j] << " ";
        }
        cout << endl;
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
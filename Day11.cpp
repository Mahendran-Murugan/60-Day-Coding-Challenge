/*
    Day 11
    An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

    1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
    2nd data, Total number of wheels = W
    The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.
    Example :

    Input :
    200  -> Value of V
    540   -> Value of W

    Output :
    TW =130 FW=70
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v = 0, w = 0;
    cin >> v >> w;
    if (w < 2 || v > w || w % 2 != 0)
    {
        cout << "INVALID INPUT";
        return 0;
    }
    else
    {
        int fourWheeler = (w - (2 * v)) / 2;
        int twoWheeler = v - fourWheeler;
        cout << "TW =" << twoWheeler << "\t"
             << "FW =" << fourWheeler;
    }
    cout << endl;
}
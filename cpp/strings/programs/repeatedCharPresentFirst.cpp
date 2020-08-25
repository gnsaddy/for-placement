/*
Find repeated character present first in a string

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "abcdzc";
    int res = INT_MAX;
    int count[256];

    fill_n(count, 256, -1);

    for (int i = 0; i < str1.length(); i++)
    {
        if (count[str1[i]] == -1)
            count[str1[i]] = i;
        else
        {
            cout << str1[i] << " at ";
            res = min(res, count[str1[i]]);
            cout << res << endl;
        }
    }
}
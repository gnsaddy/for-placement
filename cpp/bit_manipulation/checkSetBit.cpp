/*
check ith bit is set of not
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter number of queries: " << endl;
    int query; 
    cin >> query;

    int n, i;

    while (query--)
    {

        cin >> n >> i;
        int f = 1;
        f = f << i;

        int res = n & f;

        if (res == 0)
        {
            cout << "False" << endl;
        }
        else
        {
            cout << "True" << endl;
        }
    }
}
// Count of different ways to express N as the sum of 1, 3 and 4
#include <bits/stdc++.h>
using namespace std;

int takeSum(int n)
{
    int ar[n + 1];
    ar[0] = 1;
    ar[1] = ar[2] = 1;
    ar[3] = 2;

    for (int i = 4; i <= n; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 3] + ar[i - 4];
    }
    return ar[n];
}

int main()
{
    int n;
    cin >> n;
    int x = takeSum(n);
    cout << x << endl;
}
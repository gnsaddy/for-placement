/*

There are N people in a room.
Your task is to find the number of ways to divide the people of the room into two groups A and B, such that each group contains at-least one member.
As the number of ways can be large, print output modulo .

Input format

First line contains the number of test cases, T.
Next T lines contains N denoting the number of people in a room.

*/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long
#define nax 100005
int arr[100005];

long long fastmod(int base, int pow)
{
    if (pow < 0)
    {
        return nax + 1;
    }
    if (pow == 0)
        return 1;
    else if (pow & 1)
    {
        return (base * fastmod(base, pow - 1)) % mod;
    }
    else
    {
        long long k = fastmod(base, pow / 2);
        return (k * k) % mod;
    }
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
            cout << 0 << "\n";
        else
            cout << fastmod(2, n) - 2 << "\n";
    }
}
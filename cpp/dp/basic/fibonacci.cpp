#include <bits/stdc++.h>
using namespace std;

int fibRec(int n)
{
    if (n < 1)
    {
        return 0;
    }
    if (n <= 2)
    {
        return 1;
    }
    else
        return (fibRec(n - 1) + fibRec(n - 2));
}

int fibDP(int n)
{
    int N = n + 2;
    if (n < 1)
    {
        return 0;
    }
    if (n <= 2)
    {
        return 1;
    }

    int arr[N];
    fill_n(arr, N, -1);
    arr[0] = 0;
    arr[1] = 1;

    if (arr[N - 1] == -1)
        arr[N - 1] = fibDP(n - 1);
    if (arr[N - 2] == -1)
        arr[N - 2] = fibDP(n - 2);

    return arr[N - 1] + arr[N - 2];
}

int main()
{
    int n = 4;

    for (int i = 0; i <= n; i++)
        cout << fibRec(i) << " ";
    cout << endl;

    for (int i = 0; i <= n; i++)
        cout << fibDP(i) << " ";
    cout << endl;
}
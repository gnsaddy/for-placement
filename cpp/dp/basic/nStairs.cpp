// Count ways to reach the nth stair using step 1, 2 or 3

#include <bits/stdc++.h>
using namespace std;

int numOfStairs(int stairs)
{
    int N = stairs + 1;

    if (stairs < 1)
        return 0;
    if (stairs <= 2)
        return 1;

    int ar[stairs + 1];
    // fill_n(ar, N, -1);
    ar[0] = 0;
    ar[1] = 1;
    ar[2] = 1;

    for (int i = 3; i <= stairs; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 2] + ar[i - 3];
    }

    // if (ar[N - 1] == -1)
    //     ar[N - 1] = numOfStairs(stairs - 1);
    // if (ar[N - 2] == -1)
    //     ar[N - 2] = numOfStairs(stairs - 2);
    // if (ar[N - 3] == -1)
    //     ar[N - 3] = numOfStairs(stairs - 3);

    return ar[stairs];
}

int main()
{
    int stairs;
    cin >> stairs;
    int x = numOfStairs(stairs + 1);
    cout << x << endl;
}
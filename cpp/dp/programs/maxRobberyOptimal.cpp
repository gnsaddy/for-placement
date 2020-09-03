#include <bits/stdc++.h>
using namespace std;

int rob(int ar[], int size)
{
    // corner cases

    if (ar == NULL || size == 0)
        return 0;

    if (size == 1)
        return ar[0];

    // base case
    int prev2 = ar[0];
    int prev1 = max(ar[0], ar[1]);

    for (int i = 2; i < size; i++)
    {
        int temp = prev1;
        prev1 = max(prev2 + ar[i], prev1);
        prev2 = temp;
    }
    return prev1;
}

int main()
{
    int ar[] = {6, 7, 1, 3, 8, 2, 4};
    int s = sizeof(ar) / sizeof(ar[0]);
    int res = rob(ar, s);
    cout << res << endl;
}
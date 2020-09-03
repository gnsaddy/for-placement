#include <bits/stdc++.h>
using namespace std;

int rob(int ar[], int size)
{
    int cache[size + 1];

    // corner cases

    if (ar == NULL || size == 0)
        return 0;

    if (size == 1)
        return ar[0];

    // base case
    cache[0] = ar[0];
    cache[1] = max(ar[0], ar[1]);

    for (int i = 2; i < size; i++)
    {
        int selected = cache[i - 2] + ar[i];
        int notSelected = cache[i - 1];

        cache[i] = max(selected, notSelected);
    }
    return cache[size - 1];
}

int main()
{
    int ar[] = {6};
    int s = sizeof(ar) / sizeof(ar[0]);
    int res = rob(ar, s);
    cout << res << endl;
}
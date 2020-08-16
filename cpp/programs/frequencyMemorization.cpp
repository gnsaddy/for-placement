#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 4;

int main()
{
    int ar[] = {1, 2, 3, 7, 7, 1, 1, 7, 3, 2, 8, 9, 1, 2, 5, 6, 7, 8, 9, 11, 2, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(ar) / sizeof(ar[0]);
    int freq[N] = {0};

    for (int i = 0; i < size; i++)
    {
        // memorization
        freq[ar[i]] += 1;
    }

    int s = sizeof(freq) / sizeof(freq[0]);
    for (int i = 0; i < s; i++)
    {
        if (freq[i] != 0)
            cout << i << " occurs " << freq[i] << " times " << endl;
    }
}

// too much of memory wastage
// not suitable for larger value

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 3, 2};
    int size = sizeof(ar) / sizeof(ar[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += ar[i];
    }

    cout << sum << endl;

    cout << *max_element(ar, ar + size) << endl;
    cout << "------" << endl;
    int max = ar[0];
    for (int i = 0; i < size; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    cout << max << endl;
}
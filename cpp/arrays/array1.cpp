#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;

    int ar[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    // ascending
    int n = sizeof(ar) / sizeof(ar[0]);
    // descending
    // sort(ar, ar + n, greater<int>());

    sort(ar, ar + n);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << "\t";
    }
}
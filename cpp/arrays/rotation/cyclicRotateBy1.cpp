#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(ar) / sizeof(ar[0]);
    int rt = 2;

    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }

    cout << endl;

    for (int i = size - rt; i != size; i++)
    {
        cout << ar[i] << " ";
    }
    for (int i = 0; i != size - rt; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    vector<int> v(ar, ar + size);

    rotate(v.begin(), v.begin() + size - rt, v.end());

    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}
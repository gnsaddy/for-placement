#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    int ar[] = {3, 3, 4, 2, 4, 4, 2, 3, 3, 3, 3};
    int count = 0;
    int size = sizeof(ar) / sizeof(ar[0]);

    for (int i = 0; i < size; i++)
    {
        mp[ar[i]]++;
    }

    for (auto &i : mp)
    {
        // cout << i.first << ":" << i.second << endl;
        if (i.second > size / 2)
        {
            count = 1;
            cout << i.first << endl;
        }
    }
    if (count == 0)
    {
        cout << "No Majority Element" << endl;
    }
}
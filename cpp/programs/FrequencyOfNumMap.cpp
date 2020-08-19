#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    int ar[] = {1, 1, 2, 3, 4, 2, 3, 1, 4, 3, 2, 1, 2, 3, 4, 3, 2, 3, 5};
    int size = sizeof(ar) / sizeof(ar[0]);

    for (int i = 0; i < size; i++)
    {
        mp[ar[i]]++;
    }

    // for (auto i : mp)
    // {
    //     cout << i.first << " : " << i.second << endl;
    // }

    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << ":" << it->second << endl;
    }

    // searching in map
    cout << "Enter key to search : \n";
    int k;
    cin >> k;

    it = mp.find(k);
    if (it != mp.end())
        cout << it->first << ":" << it->second;
}

// solves on o(nlogn)
// saves space problem
// can store larger numbers
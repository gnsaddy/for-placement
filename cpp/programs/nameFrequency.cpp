#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    string name[] = {"aditya", "bhaskar", "alok", "aditya", "alok", "amit", "alok", "amit", "aditya"};
    int size = sizeof(name) / sizeof(name[0]);

    // for (auto i : name)
    // {
    //     cout << i << endl;
    // }

    for (int i = 0; i < size; i++)
    {
        mp[name[i]]++;
    }

    for (auto i : mp)
    {
        cout << i.first << ":" << i.second << endl;
    }

    // map<string, int>::iterator it;
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     // cout << it->first << ":" << it->second << endl;
    //     if (it->second > 1)
    //     {
    //         it->second++;
    //     }
    // }
}
#include <bits/stdc++.h>
#pragma GCC optimize "17"
#include <map>
using namespace std;

#define pi pair<int, int>
int main()
{
    map<int, int> mp;
    // using pair
    mp.insert(pi(10, 12));

    // using make_pair
    mp.insert(make_pair(20, 30));

    for (auto i : mp)
    {
        cout << i.first << " : " << i.second << endl;
    }
}
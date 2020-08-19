#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, vector<long>> mp;
    mp["aditya"].push_back(8271388851);
    mp["aditya"].push_back(8271377221);
    mp["amit"].push_back(9876543210);
    mp["sumit"].push_back(987987654);

    for (auto i : mp)
    {
        cout << i.first << ":";
        for (auto j : i.second)
        {
            cout << j << ",";
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long int
#define pi pair<string, ll>

int main()
{
    unordered_map<string, ll> up1;
    up1["Addy"] = 8271388851;
    up1["Amit"] = 9876543210;
    for (auto &i : up1)
    {
        cout << i.first << ":" << i.second << endl;
    }

    up1.insert(pi("Alok", 8765432198));
    up1["Addy"] = 8271377221;
    up1.insert(make_pair("Bhaskar", 989876543));
    for (auto &i : up1)
    {
        cout << i.first << ":" << i.second << endl;
    }

    // search in unordered map
    // If key not found in map iterator to end is returned
    string k1 = "Addy";
    if (up1.find(k1) == up1.end())
    {
        cout << k1 << " : Not Found" << endl;
    }
    // If key found then iterator to that key is returned
    else
    {
        cout << k1 << " : Found" << endl;
    }

    //    iterating over all value of umap
    unordered_map<string, ll>::iterator itr;
    cout << "\nAll Elements : \n";
    for (itr = up1.begin(); itr != up1.end(); itr++)
    {
        // itr works as a pointer to pair<string, double>
        // type itr->first stores the key part  and
        // itr->second stroes the value part
        cout << itr->first << "  " << itr->second << endl;
    }
    cout << up1.count("Addy");
}
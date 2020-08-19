#include <bits/stdc++.h>
using namespace std;
#define pi pair<string, int>

int main()
{
    pair<int, int> p1, p2;
    p1 = make_pair(10, 20);
    p2 = make_pair(40, 50);

    cout << "p1: " << p1.first << "," << p1.second << endl;
    cout << "p1: " << p2.first << "," << p2.second << endl;

    // vector
    vector<pi> v1;
    v1.push_back(pi("Addy", 23));
    v1.push_back(make_pair("Amit", 25));

    for (auto i : v1)
    {
        cout << i.first << "," << i.second << endl;
    }
}
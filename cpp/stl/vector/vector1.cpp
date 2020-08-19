#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1{9, 8, 7, 6, 5, 4, 3, 4, 5, 6, 7};
    for (auto i : v1)
    {
        cout << i << endl;
    }

    cout << v1[4] << endl;
    cout << v1.at(4) << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    vector<int> v2 = {9, 8, 7, 6, 5, 4, 3, 4, 5, 6, 7};
    vector<int> v3(5, 10);

    vector<int>::iterator it = v1.begin();
    v1.insert(it, 10);

    for (auto i : v3)
    {
        cout << i << endl;
    }
}
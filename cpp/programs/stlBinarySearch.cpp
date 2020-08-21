#include <bits/stdc++.h>
using namespace std;

void vec()
{
    vector<int> v1;
    v1.push_back(100);
    v1.push_back(110);
    v1.push_back(90);
    v1.push_back(40);
    v1.push_back(100);
    v1.push_back(100);
    v1.push_back(100);
    v1.push_back(100);
    v1.push_back(100);
    v1.push_back(10);
    v1.push_back(50);
    v1.push_back(12);

    for (auto &i : v1)
    {
        cout << i << endl;
    }

    cout << "sorted vector \n";
    sort(v1.begin(), v1.end());
    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "Binary search \n";

    bool present = binary_search(v1.begin(), v1.end(), 100);
    cout << present << endl;

    it = lower_bound(v1.begin(), v1.end(), 100);
    cout << *it << endl;

    auto it2 = upper_bound(v1.begin(), v1.end(), 100);
    cout << it2 - it << endl;

    sort(v1.begin(), v1.end(), greater<int>());
    for (auto &i : v1)
    {
        cout << i << endl;
    }
}
void sets()
{
    set<int> s;
    s.insert(10);
    s.insert(8);
    s.insert(110);
    s.insert(-10);
    s.insert(-10);
    s.insert(110);
    s.insert(210);
    s.insert(2);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    auto it1 = s.lower_bound(110);
    auto it2 = s.upper_bound(110);

    cout << *it1 << "," << *it2 << endl;

    auto it3 = s.find(110);
    if (it3 == s.end())
    {
        cout << "Not present\n";
    }
    else
    {
        cout << "present " << *it3 << endl;
    }
    s.erase(110);
}

void test()
{
    // valarray<int> v{1, 5, 3, 4, 5};
    valarray<int> v{4, 3, 2, 1, 4};
    int tsum = v.sum();
    int cur = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cur = cur + v[i];
        cout << cur << endl;
        if (cur == tsum / 2)
        {
            for (int j = 0; j < v[i]; j++)
            {
                cout << v[j] << " ";
            }
            cout << endl;
            for (int j = v[i]; j < v.size(); j++)
            {
                cout << v[j] << " ";
            }
            cout << endl;
            exit(0);
        }
        if (cur == tsum)
        {
            cout << "Not possible" << endl;
        }
    }
}
int main()
{
    test();
}
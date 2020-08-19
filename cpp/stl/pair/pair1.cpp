#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1, p2;
    p1 = make_pair(10, 20);
    p2 = make_pair(40, 50);

    cout << "p1: " << p1.first << "," << p1.second << endl;
    cout << "p1: " << p2.first << "," << p2.second << endl;
    p1.swap(p2);

    cout << "p1: " << p1.first << "," << p1.second << endl;
    cout << "p1: " << p2.first << "," << p2.second << endl;
}
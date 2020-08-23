#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(ar) / sizeof(ar[0]);
    int d = 3;
    int temp[d] = {0};

    cout << "<---------o(n), space - o(d)------->\n";
    for (int i = 0; i < d; i++)
    {
        temp[i] = ar[i];
    }

    for (int i = d; i < size; i++)
    {
        cout << ar[i] << " ";
    }

    for (int i = 0; i < d; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    cout << "<---------o(n),o(1)---------->" << endl;
    for (int i = d; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    for (int i = 0; i != 0 + d; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    cout << "<---------o(n),o(1) Right rotate---------->" << endl;
    for (int i = size - d; i != size; i++)
    {
        cout << ar[i] << " ";
    }
    for (int i = 0; i != size - d; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    cout << "Using vector : " << endl;
    vector<int> v(ar, ar + size);
    vector<int>::iterator it;
    cout << "<---------o(n), space - o(1)------->\n";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (it = v.begin() + d; it != v.end(); it++)
    {
        cout << *it << " ";
    }

    for (it = v.begin(); it != v.begin() + d; it++)
    {
        cout << *it << " ";
    }

    cout << "\n---------STL----------\n";
    cout << "\nUsing rotate function stl in vector" << endl;
    vector<int> v2(ar, ar + size);

    cout << "\nleft rotation:" << endl;
    rotate(v2.begin(), v2.begin() + d, v2.end());
    for (it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\nUsing rotate function stl in vector" << endl;
    vector<int> v3(ar, ar + size);

    cout << "\nright rotation:" << endl;
    rotate(v3.begin(), v3.begin() + v3.size() - d, v3.end());
    for (it = v3.begin(); it != v3.end(); it++)
    {
        cout << *it << " ";
    }
}
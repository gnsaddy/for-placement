#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter size \n";
    cin >> n;

    int p[n], d[n], t[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int fi = 0;

    for (int i = 0; i < n; i++)
    {
        sum = (d[i] - p[i] + t[i]);
        cout << sum << endl;
        fi += sum;
    }
    cout << fi << "\n";
}
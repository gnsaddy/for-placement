#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 10; i++)
    {
        cout << i * 2 << endl;
    }

    int i = 0;
    while (i < 10)
    {
        cout << i * 2 << endl;
        i++;
    }

    int j = 1;
    do
    {
        cout << j * 2 << endl;
        j++;
    } while (j < 10);
}
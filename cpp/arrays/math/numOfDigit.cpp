#include <bits/stdc++.h>
using namespace std;

int recursive(int num)
{
    if (num == 0)
        return 0;
    return (1 + recursive(num / 10));
}

int iterative(int num)
{
    int count = 0;

    while (num != 0)
    {
        num = num / 10;
        ++count;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;

    int r = recursive(num);
    cout << "recursive: " << r << endl;
    int i = iterative(num);
    cout << "iterative: " << i << endl;
}
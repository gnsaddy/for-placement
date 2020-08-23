// split an array into two equal sum subarray

#include <bits/stdc++.h>
using namespace std;

int split(int ar[], int size)
{
    // left sum
    int leftSum = 0;
    for (int i = 0; i < size; i++)
    {
        leftSum += ar[i];
    }

    // right sum
    int rightSum = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        rightSum += ar[i];

        leftSum -= ar[i];

        if (rightSum == leftSum)
        {
            // cout << i;
            return i;
        }
    }
    return -1;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 5};
    int size = sizeof(ar) / sizeof(ar[0]);

    int sp = split(ar, size);

    if (sp == -1 || sp == size)
    {
        cout << "Not pissible";
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (sp == i)
            cout << endl;
        cout << ar[i] << " ";
    }
}
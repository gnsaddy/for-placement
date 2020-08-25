#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {6, 10, 12, 15, 14, 2, 4, 5};
    int sum = 14;
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (sum >= arr[i])
        {
            count++;
        }
    }
    cout << count << endl;
}
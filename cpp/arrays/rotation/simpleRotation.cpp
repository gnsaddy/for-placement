#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[] = {13, 4, 5, 8, 1, 12, 9, 11, 6, 7};
    int size = sizeof(ar) / sizeof(ar[0]);

    cout << "rotation " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << ar[i] << " ";
    }

    cout << "Max element " << endl;
    int max = ar[0];
    for (int i = 0; i < size; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    cout << max << endl;
    cout << "using max_element function :";
    int *mx = max_element(ar, ar + size);
    cout << *mx << endl;

    cout << "bubble sorting: " << endl;
    bool swapped;
    for (int i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp;
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }

    for (auto i : ar)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << "using sort function descending: " << endl;
    sort(ar, ar + size, greater<int>());
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
}

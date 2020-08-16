/* C++ program to find the frequency of each element of array */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int freq[100];
    int count;
    int arr[] = {1, 2, 1, 1, 2, 3, 4, 5, 1, 3, 2, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
        freq[i] = -1;

    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)

        {
            /* If duplicate element is found */
            if (arr[i] == arr[j])
            {
                count++;
                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }
        /* If frequency of current element is not counted */
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    /* Print frequency of each element */

    cout << "Frequency of all elements of array : \n";

    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
        {
            cout << arr[i] << " occurs " << freq[i] << " times " << endl;
        }
    }
}

// O(n^2)
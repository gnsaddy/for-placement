/*
Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
Given an array, only rotation operation is allowed on array. We can rotate the array as
 many times as we want. Return the maximum possbile of summation of i*arr[i].

Input: arr[] = {1, 20, 2, 10}
Output: 72
We can 72 by rotating array twice.
{2, 10, 1, 20}
20*3 + 1*2 + 10*1 + 2*0 = 72

Input: arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
Output: 330
We can 330 by rotating array 9 times.
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
0*1 + 1*2 + 2*3 ... 9*10 = 330

*/
#include <bits/stdc++.h>
using namespace std;

// Returns max possible value of i*arr[i]
int maxSum(int arr[], int n)
{
    // Find array sum and i*arr[i] with no rotation
    int arrSum = 0;  // Stores sum of arr[i]
    int currVal = 0; // Stores sum of i*arr[i]
    for (int i = 0; i < n; i++)
    {
        arrSum = arrSum + arr[i];
        currVal = currVal + (i * arr[i]);
    }

    // Initialize result as 0 rotation sum
    int maxVal = currVal;

    // Try all rotations one by one and find
    // the maximum rotation sum.
    // cout << currVal << endl;
    for (int j = 1; j < n; j++)
    {
        // cout << "-->b: " << j << ":" << currVal << endl;
        currVal = currVal + arrSum - n * arr[n - j];
        // cout << "-->f: " << j << ":" << currVal << endl;
        if (currVal > maxVal)
            maxVal = currVal;
    }

    // Return result
    return maxVal;
}

void usingVector()
{
    vector<int> v{3, 2, 1};
    // Initialize result
    int res = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        int sumPro = 0;
        rotate(v.begin(), v.begin() + i, v.end());
        for (int j = 0; j < v.size(); j++)
        {
            sumPro = sumPro + j * v[j];
        }
        res = max(res, sumPro);
    }
    cout << res << endl;
}

auto main() -> int
{
    int arr1[] = {8, 3, 1, 2};
    int arr2[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Max value: " << maxSum(arr1, n1) << endl;
    cout << "Max value: " << maxSum(arr2, n2) << endl;
    cout << "----------" << endl;
    usingVector();
}
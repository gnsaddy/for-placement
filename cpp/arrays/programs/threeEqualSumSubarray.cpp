// CPP program to determine if array arr[]
// can be split into three equal sum sets.
/*
Consider an array A of n integers. Determine if array A can be split into three consecutive parts
 such that sum of each part is equal. If yes then print any index pair(i, j) 
 such that sum(arr[0..i]) = sum(arr[i+1..j]) = sum(arr[j+1..n-1]), otherwise print -1.
Input : arr[] = {1, 3, 4, 0, 4}
Output : (1, 2)
Sum of subarray arr[0..1] is equal to
sum of subarray arr[2..3] and also to
sum of subarray arr[4..4]. The sum is 4. 

Input : arr[] = {2, 3, 4}
Output : -1
No three subarrays exist which have equal
sum.

*/
#include <iostream>
using namespace std;

// Function to determine if array arr[]
// can be split into three equal sum sets.
int findSplit(int arr[], int n)
{
    int i;

    // variable to store prefix sum
    int preSum = 0;

    // variables to store indices which
    // have prefix sum divisible by S/3.
    int ind1 = -1, ind2 = -1;

    // variable to store sum of
    // entire array.
    int S = 0;

    // Find entire sum of the array.
    for (i = 0; i < n; i++)
        S += arr[i];

    // Check if array can be split in
    // three equal sum sets or not.
    if (S % 3 != 0)
        return 0;

    // Variables to store sum S/3
    // and 2*(S/3).
    int S1 = S / 3;
    int S2 = 2 * S1;

    for (i = 0; i < n; i++)
    {
        preSum += arr[i];

        // If prefix sum is equal to S/3
        // store current index.
        if (preSum == S1 && ind1 == -1)
            ind1 = i;

        // If prefix sum is equal to 2* (S/3)
        // store current index.
        else if (preSum == S2 && ind1 != -1)
        {
            ind2 = i;

            // Come out of the loop as both the
            // required indices are found.
            break;
        }
    }

    // If both the indices are found
    // then print them.
    if (ind1 != -1 && ind2 != -1)
    {
        cout << "(" << ind1 << ", "
             << ind2 << ")";
        return 1;
    }

    // If indices are not found return 0.
    return 0;
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 6, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (findSplit(arr, n) == 0)
        cout << "-1";
    return 0;
}

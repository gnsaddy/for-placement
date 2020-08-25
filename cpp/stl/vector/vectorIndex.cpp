// C++ program to find the index
// of an element in a vector

#include <bits/stdc++.h>
using namespace std;

// Function to print the
// index of an element
void getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(),
                   v.end(), K);

    // If element was found
    if (it != v.end())
    {
        // calculating the index
        // of K
        int index = distance(v.begin(),
                             it);
        cout << index << endl;
    }
    else
    {
        // If the element is not
        // present in the vector
        cout << "-1" << endl;
    }
}
// Driver Code
int main()
{
    // Vector
    vector<int> v = {1, 45, 54, 71,
                     76, 17};
    // Value whose index
    // needs to be found
    int K = 54;
    getIndex(v, K);
    return 0;
}

// C++ program to print all elements present in each bucket
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring umap to be of <string, double> type
    // key will be of string type and mapped value
    // will be of double type
    unordered_map<string, double> umap;

    // inserting values by using [] operator
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;
    umap["e"] = 2.718;

    unsigned n = umap.bucket_count();

    // Prints elements present in each bucket
    for (unsigned i = 0; i < n; i++)
    {
        cout << "Bucket " << i << " contains: ";
        for (auto it = umap.begin(i); it != umap.end(i); it++)
            cout << "(" << it->first << ", "
                 << it->second << ") ";
        cout << "\n";
    }
    return 0;
}

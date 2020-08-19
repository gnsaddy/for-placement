// as we know, internally unordered_map is implemented using hash table so, a bucket is a slot in the internal 
// hash Table to which elements are assigned based on the hash value of their key.Buckets are numbered from 
// 0 to(bucket_count - 1).Hence this function returns the bucket no.where element with key is located in 
// unordered_map.Time Complexity : O(1)

// C++ program to demonstrate the use of std::bucket
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring umap to be of <string, double> type
    // key will be of string type and mapped value will
    // be of double type
    unordered_map<string, double> umap;

    // inserting values by using [] operator
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;
    umap["e"] = 2.718;

    // Display bucket no. where key, value pair is located
    // using bucket(key)
    for (auto &x : umap)
    {
        cout << "(" << x.first << ", " << x.second << ")";
        cout << " is in bucket= "
             << umap.bucket(x.first) << endl;
    }
    cout << endl;

    // Count the no.of buckets in the unordered_map
    // using bucket_count()
    int n = umap.bucket_count();
    cout << "umap has " << n << " buckets.\n\n";

    // Count no. of elements in each bucket using
    // bucket_size(position)
    for (int i = 0; i < n; i++)
    {
        cout << "Bucket " << i << " has "
             << umap.bucket_size(i) << " elements.\n";
    }

    return 0;
}

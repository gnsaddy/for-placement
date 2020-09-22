#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> m;
    map<int, int>::iterator it;
    int n, q, a, y, z;
    cin >> n >> q;
    while (q--)
    {
        cin >> y >> z;
        if (y == 1)
        {
            m[z] = 1;
        }
        else
        {
            it = m.lower_bound(z);
            if (it != m.end())
            {
                cout << (it)->first << "\n";
            }
            else
                cout << "-1\n";
        }
    }
    return 0;
}

/*
You are given an array A of length N which is initialised with 0. You will be given Q queries of two types:

: set value 1 at index k in array A

: print the smallest index x which is greater than or equal to y and having value 1. If there is no such index print 1.

Note: Indexing is 1 based

Input Format

First line contains two integers N and Q separated by a space.

The next Q lines contain the type of query (i.e. either a 1 or a 2), then a space, then for type 1 queries integer k and for type 2 queries integer y

Output Format

For each query type 2, print in new line, the smallest index x which is greater than or equal to y and having value 1. If there is no such index print 1.

Constraints



SAMPLE INPUT 
5 5
2 3
1 2
2 1
2 3
2 2
SAMPLE OUTPUT 
-1
2
-1
2
*/
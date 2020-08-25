#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "string"; // string
    string t = s1;
    sort(s1.begin(), s1.end());
    // int i = 1;
    // for (i = 1; i < INT_MAX; i++)
    // {
    //     if (t == s1)
    //     {
    //         break;
    //     }
    //     (next_permutation(s1.begin(), s1.end()));
    // }
    int i = 1;
    do
    {
        if (t == s1)
        {
            break;
        }
        i++;
    } while (next_permutation(s1.begin(), s1.end()));

    cout << t << " rank is " << i << endl;
}
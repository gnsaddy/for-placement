#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "aabbaadaabbf";
    // here first d is not repeating
    pair<int, int> pr[256];

    for (int i = 0; i < s1.length(); i++)
    {
        (pr[s1[i]].first)++;
        pr[s1[i]].second = i;
    }
    int res = INT_MAX;

    for (int i = 0; i < 256; i++)
    {
        // check the first value of pair is 1 or not
        // if 1 then take minimum of the 2nd values
        if (pr[i].first == 1)
        {
            res = min(res, pr[i].second);
        }
    }
    cout << s1[res] << " at " << res << endl;
}
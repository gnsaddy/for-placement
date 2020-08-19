#include "bits/stdc++.h"
using namespace std;

// 6
// 0 2 9 10 11 12
// 5 9 11 11 14 17
// 1 2 3 2 2 1

#define ll long long int
#define ld long double
#define pi pair<int, int>
#define pb push_back
#define fi first
#define se second

const int N = 1e5 + 5;

map<int, int> m;
vector<pi> v[N];
long dp[N];

long taxiDriver(vector<long> p, vector<long> d, vector<int> t)
{
    int n = p.size();
    for (int i = 0; i < n; i++)
    {
        m[p[i]] = 1;
        m[d[i]] = 1;
    }

    int x = 0;
    // modifing m
    for (auto &i : m)
    {
        // cout << i.fi << ": " << i.se << endl;
        x += i.se;
        i.se = x;
        // cout << i.fi << ": " << i.se << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // cout << p[i] << ":" << d[i] << endl;
        v[m[d[i]]].push_back({m[p[i]], t[i] + d[i] - p[i]});
        cout << "v[m[d[i]]] .push_back => (" << m[p[i]] << " , " << t[i] + d[i] - p[i] << " )" << endl;
        // cout << t[i] + d[i] - p[i];
    }

    for (int i = 1; i < N; i++)
    {
        // cout << "=>: " << dp[i - 1] << "," << dp[i] << endl;
        dp[i] = max(dp[i - 1], dp[i]);
        for (auto j : v[i])
        {
            // cout << "dp ---: " << dp[i - 1] << " : " << dp[i] << endl;
            cout << "Before =>: " << dp[i] << "," << dp[j.fi] + j.se << endl;
            dp[i] = max(dp[i], dp[j.fi] + j.se);
            cout << "After =>: " << dp[i] << "," << dp[j.fi] + j.se << endl;
        }
    }
    return dp[N - 1];
}

signed main()
{
    int n;
    cin >> n;
    vector<long> p(n), d(n);
    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> d[i];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    cout << taxiDriver(p, d, t);
    return 0;
}
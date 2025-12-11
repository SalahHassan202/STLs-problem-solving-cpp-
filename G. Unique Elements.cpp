// G. Unique Elements

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll res = 0;
    for (auto i : mp)
    {
        if (i.second == 1)
        {
            res++;
        }
    }

    cout << res;
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
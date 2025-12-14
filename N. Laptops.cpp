// N. Laptops

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
    vector<pair<ll, ll>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    bool ok = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].second > v[i + 1].second)
        {
            ok = true;
        }
    }

    if (ok)
    {
        cout << "Happy Alex";
    }
    else
    {
        cout << "Poor Alex";
    }
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
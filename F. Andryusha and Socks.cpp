// F. Andryusha and Socks

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
    vector<ll> v(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0;
    set<ll> s;

    for (int i = 0; i < 2 * n; i++)
    {
        if (s.count(v[i]))
        {
            s.erase(v[i]);
        }
        else
        {
            s.insert(v[i]);
        }
        ans = max(ans, (ll)s.size());
    }

    cout << ans;
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
// R. You Are So Beautiful

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
    map<ll, ll> f, l;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (!f.count(v[i]))
            f[v[i]] = i;

        l[v[i]] = i;
    }

    ll ans = 0;
    ll g = 0;

    for (int i = 0; i < n; i++)
    {
        if (f[v[i]] == i)
            g++;

        if (l[v[i]] == i)
            ans += g;
    }

    cout << ans << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
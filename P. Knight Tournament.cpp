// P. Knight Tournament

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
void solve()
{
    ll n, m;
    cin >> n >> m;
    set<ll> s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i); // n = 5   ===> set // s ===> 1 2 3 4 5
    }
    vector<ll> ans(n);

    while (m--)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        auto it = s.lower_bound(l); // i <= l;
        vector<ll> del;
        while (it != s.end() && *it <= r)
        {
            if (*it != x)
            {
                del.push_back(*it);
                ans[(*it) - 1] = x;
            }
            it++;
        }
        for (auto i : del)
        {
            s.erase(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
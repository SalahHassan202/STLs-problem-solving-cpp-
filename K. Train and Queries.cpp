// K. Train and Queries

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    map<ll, pair<ll, ll>> mp;
    // station ==> k     ,, pair<ll , ll>  ===> start , end ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (mp[a[i]].first == 0)
        {
            mp[a[i]].first = i + 1;
        }
        mp[a[i]].second = i + 1;
    }

    while (k--)
    {
        ll a, b;
        cin >> a >> b;
        if (mp.count(a) != 0 && mp.count(b) != 0 && mp[b].second >= mp[a].first)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
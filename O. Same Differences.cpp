// O. Same Differences

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
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<ll, ll> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += mp[a[i] - i];
        mp[a[i] - i]++;
    }

    cout << ans << endl;
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
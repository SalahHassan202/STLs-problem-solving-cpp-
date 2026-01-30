// B. Just Do It 2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    unordered_map<string, ll> mp;
    while (n--)
    {
        string s;
        cin >> s;
        ll x;
        cin >> x;
        mp[s] = x;
    }

    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            string s;
            ll z;
            cin >> s >> z;
            mp[s] += z;
        }
        else // t == 2
        {
            string s;
            cin >> s;
            cout << mp[s] << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
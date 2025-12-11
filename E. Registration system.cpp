// E. Registration system

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
    map<string, ll> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (mp[s] != 0)
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
        else
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
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
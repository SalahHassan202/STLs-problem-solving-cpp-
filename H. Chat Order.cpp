// H. Chat Order

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
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    map<string, ll> mp;

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[s[i]] == 0)
        {
            cout << s[i] << endl;
            mp[s[i]] = 1;
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
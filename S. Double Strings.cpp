// S. Double Strings

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
    map<string, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]] = 1;
    }
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        char x = '0';
        for (int j = 0; j < s[i].size(); j++)
        {
            string s1 = s[i].substr(0, j);
            string s2 = s[i].substr(j);

            if (mp[s1] != 0 && mp[s2] != 0)
            {
                x = '1';
                break;
            }
        }
        ans += x;
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
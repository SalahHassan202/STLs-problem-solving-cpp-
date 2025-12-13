// J. Restoring Password

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;
    map<string, char> mp;
    for (int i = 0; i < 10; i++)
    {
        string t;
        cin >> t;
        mp[t] = i + '0';
    }
    string res = "";
    for (int i = 0; i < s.size();)
    {
        string a = "";
        for (int j = i; j < i + 10; j++)
        {
            a += s[j];
        }
        res += mp[a];
        i += 10;
    }
    cout << res;
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
// M. Lecture

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
    map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s1] = s2;
    }

    while (n--)
    {
        string a;
        cin >> a;

        if (a.size() > mp[a].size())
        {
            cout << mp[a] << " ";
        }
        else
        {
            cout << a << " ";
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
// L. Pangram

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
    string s;
    cin >> s;
    set<char> ss;
    for (int i = 0; i < s.size(); i++)
    {
        ss.insert(tolower(s[i]));
    }

    if (ss.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
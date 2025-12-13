// I. Anton and Letters

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string n;
    getline(cin, n);
    set<char> s;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] >= 'a' && n[i] <= 'z')
        {
            s.insert(n[i]);
        }
    }

    cout << s.size();
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
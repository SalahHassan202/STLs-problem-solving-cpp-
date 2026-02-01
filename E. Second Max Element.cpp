// E. Second Max Element

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            s.insert(x);
        }

        if (s.size() < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            auto it = s.rbegin();
            it++;
            cout << *it << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
// T. Social Network (hard version)

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
    ll a[n];
    map<ll, ll> mp;
    deque<ll> dq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 0)
        {
            if (dq.size() < m)
            {
                dq.push_front(a[i]);
                mp[a[i]] = 1;
            }
            else
            {
                mp[dq.back()] = 0;
                dq.pop_back();
                dq.push_front(a[i]);
                mp[a[i]] = 1;
            }
        }
    }
    cout << dq.size() << endl;
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
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
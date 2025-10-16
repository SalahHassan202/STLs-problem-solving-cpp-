// X. Phoenix and Towers

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i < m)
        {
            pq.push({v[i], i + 1});
            cout << i + 1 << " ";
        }
        else
        {
            pair<ll, ll> p = pq.top();
            p.first += v[i];
            pq.pop();
            pq.push(p);
            cout << p.second << " ";
        }
    }
    cout << endl;
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
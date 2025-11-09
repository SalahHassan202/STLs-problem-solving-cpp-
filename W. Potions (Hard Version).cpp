// W. Potions (Hard Version)

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;   cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll cnt = 0, hel = 0;
    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        hel += v[i];
        cnt++;

        if (v[i] < 0)
            pq.push(-v[i]);

        while (hel < 0)
        {
            hel += pq.top();
            cnt--;
            pq.pop();
        }
    }

    cout << cnt << endl;
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

// D. Powering the Hero (easy version)

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
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll cnt = 0;
    priority_queue<ll> pq;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0) // hero
        {
            if (!pq.empty())
            {
                cnt += pq.top();
                pq.pop();
            }
        }
        else // a[i] > 0    // bonus
        {
            pq.push(a[i]);
        }
    }

    cout << cnt << endl;
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
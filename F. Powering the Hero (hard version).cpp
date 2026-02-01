// F. Powering the Hero (hard version)

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
        priority_queue<ll> pq;
        ll tot = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > 0)
            {
                pq.push(x);
            }
            else
            {
                if (!pq.empty())
                {
                    tot += pq.top();
                    pq.pop();
                }
            }
        }
        cout << tot << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
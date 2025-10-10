// V. Airport
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
    priority_queue<ll> mx;                          // max
    priority_queue<ll, vector<ll>, greater<ll>> mn; // min

    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        mx.push(x);
        mn.push(x);
    }

    ll temp = n, mxSum = 0, mnSum = 0;
    while (temp--)
    {
        mxSum += mx.top();
        mx.push(mx.top() - 1);
        mx.pop();
    }

    while (n--)
    {
        mnSum += mn.top();
        ll p = mn.top();
        mn.pop();
        if (p - 1 > 0)
            mn.push(p - 1);
    }

    cout << mxSum << " " << mnSum << endl;
}
int main()
{
    fast;

    ll t = 1;
    // cin >> t ;
    while (t--)
    {
        solve();
    }

    return 0;
}
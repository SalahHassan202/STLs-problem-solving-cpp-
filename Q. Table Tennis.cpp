// Q. Table Tennis

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    deque<pair<ll, ll>> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i].first;
        dq[i].second = 0; // 0 0 0 0 0 0 0
    }
    ll cnt = 0;
    while (true)
    {
        pair<ll, ll> p1 = dq.front();
        dq.pop_front();
        pair<ll, ll> p2 = dq.front();
        dq.pop_front();

        if (p1.first > p2.first) // win
        {
            dq.push_back(p2);
            p1.second++;
            dq.push_front(p1);

            if (p1.second == k || p1.second == n - 1)
            {
                cnt = p1.first;
                break;
            }
        }
        else   // p2 ==> win
        {
            dq.push_back(p1);
            p2.second++;
            dq.push_front(p2);

            if (p2.second == k || p2.second == n - 1)
            {
                cnt = p2.first;
                break;
            }
        }
    }
    cout << cnt << endl;
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

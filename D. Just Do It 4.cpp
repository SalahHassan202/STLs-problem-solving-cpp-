// D. Just Do It 4

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll q;
    cin >> q;
    priority_queue<ll> pq;

    while (q--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            ll x;
            cin >> x;
            pq.push(x);
        }
        else if (s == "pop")
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            else
            {
                cout << "IT IS JUST EMPTY" << endl;
            }
        }
        else // s == top
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "IT IS JUST EMPTY" << endl;
            }
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
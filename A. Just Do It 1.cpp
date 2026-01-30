// A. Just Do It 1

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
    multiset<ll> ms;
    while (q--)
    {
        ll y;
        cin >> y;
        if (y == 1)
        {
            ll x;
            cin >> x;
            ms.insert(x);
        }
        else if (y == 2)
        {
            ll x;
            cin >> x;
            auto it = ms.find(x);
            if (it != ms.end())
            {
                ms.erase(it);
            }
        }
        else // y == 3
        {
            if (ms.empty())
            {
                cout << "It is Just EMPTY" << endl;
            }
            else
            {
                cout << *ms.begin() << endl;
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
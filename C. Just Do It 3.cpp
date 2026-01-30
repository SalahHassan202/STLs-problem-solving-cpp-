// C. Just Do It 3

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
    set<ll> st;

    while (q--)
    {
        string s;
        cin >> s;
        if (s == "insert")
        {
            ll x;
            cin >> x;
            st.insert(x);
        }
        else if (s == "find")
        {
            ll x;
            cin >> x;
            if (st.find(x) != st.end())
            {
                cout << "found" << endl;
            }
            else
            {
                cout << "not found" << endl;
            }
        }
        else if (s == "lower_bound")
        {
            ll x;
            cin >> x;
            auto it = st.lower_bound(x);
            if (it == st.end())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << *it << endl;
            }
        }
        else if (s == "upper_bound")
        {
            ll x;
            cin >> x;
            auto it = st.upper_bound(x);
            if (it == st.end())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << *it << endl;
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
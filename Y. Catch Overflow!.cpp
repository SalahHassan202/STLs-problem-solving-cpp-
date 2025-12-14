// Y. Catch Overflow!
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
    stack<ll> st;
    ll ans = 0;
    ll mx = pow(2, 32) - 1;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "add")
        {
            if (!st.empty())
            {
                ans += st.top();
            }
            else
            {
                ans++;
            }

            if (ans > mx)
            {
                cout << "OVERFLOW!!!";
                return;
            }
        }
        else if ((s == "for"))
        {
            ll a;
            cin >> a;
            if (st.empty())
            {
                st.push(a);
            }
            else
            {
                if (st.top() > mx || st.top() * a > mx)
                {
                    st.push(mx + 1);
                }
                else
                {
                    st.push(st.top() * a);
                }
            }
        }
        else // end
        {
            st.pop();
        }
    }

    cout << ans << endl;
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
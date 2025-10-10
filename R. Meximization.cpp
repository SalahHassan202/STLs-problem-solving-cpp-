// R. Meximization
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    // MEX({0})=1
    // MEX({0,1})=2
    // MEX({0,1,2})=3
    // MEX({0,1,2,3})=4
    // MEX({0,1,2,3,4})=5
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    vector<ll> du;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i - 1])
            du.push_back(v[i]);
        else
            cout << v[i] << " ";
    }
    for (auto i : du)
        cout << i << " ";
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
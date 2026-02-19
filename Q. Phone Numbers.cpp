// Q. Phone Numbers

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
    map<string, set<string>> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        ll k;
        cin >> s >> k;

        for (int j = 0; j < k; j++)
        {
            string x;
            cin >> x;
            mp[s].insert(x);
        }
    }

    cout << mp.size() << endl;

    for (auto &[s, y] : mp)
    {

        vector<string> v(y.begin(), y.end());
        set<string> z;

        for (int i = 0; i < v.size(); i++)
        {
            bool ok = true;

            for (int j = 0; j < v.size(); j++)
            {
                if (i == j)
                    continue;

                if (v[j].size() >= v[i].size() &&
                    v[j].substr(v[j].size() - v[i].size()) == v[i])
                {

                    ok = false;

                    break;
                }
            }

            if (ok)
            {
                z.insert(v[i]);
            }
        }

        cout << s << " " << z.size() << " ";

        for (auto &num : z)
        {
            cout << num << " ";
        }

        cout << endl;
    }
}

int main()
{

    solve();

    return 0;
}
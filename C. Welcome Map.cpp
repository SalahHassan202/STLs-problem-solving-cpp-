// C. Welcome Map

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll n , q ;        cin>> n >> q ;
    map<string ,ll> mp ;
    for(int i=0;i<n;i++)
    {
        string s ;     ll x ;
        cin>> s >> x ;
        mp[s]=x ;
    }
    while(q--)
    {
        ll t; cin >> t; 
        if(t == 1)
        {
            string s ;     ll x ;
            cin >> s>> x ;
            mp[s]+=x;
        }
        else // t == 2
        {
            string s ;
            cin >> s ;
            cout <<mp[s] << endl;
        }
    }
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    // cin>> t ;
    while(t--)
    {
        solve();
    }
  
    return 0 ;
}

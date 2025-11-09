// B. Welcome Multiset

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
   multiset<ll>ms;
   ll q ;       cin>> q ;
   while(q--)
   {
     ll y ;     cin>> y ;
       
        if(y ==1)
        {
            ll x ; cin>> x ;
            ms.insert(x) ;
            
        }
        else if(y == 2)
        {
            ll x ;     cin>> x ;
            auto it = ms.find(x) ;
            if(it!=ms.end())
             ms.erase(it);
        }
        else // y = 3
        {
            auto it = ms.begin();
            if(ms.empty())
            cout <<"It is Just EMPTY" << endl;
            else
            cout << *it << endl;
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

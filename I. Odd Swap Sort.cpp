// I. Odd Swap Sort

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll n ;    cin >> n ;
   vector<ll>v(n);
   for(int i = 0 ; i <n ;i++)    cin>>v[i] ;

   vector<ll> od ,ev ;     // odd , even 
   for(int i = 0 ; i<n ;i++)
   {
        if(v[i]% 2==0)
        {
            ev.push_back(v[i]) ;
        }
        else
        {
            od.push_back(v[i]) ;
        }
   }

   if(is_sorted(ev.begin() , ev.end())&&is_sorted(od.begin() , od.end()))
   {
        cout <<"Yes" << endl;
   }
   else
   {
        cout<<"No" << endl;
   }
  

}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t ; 
    cin>>t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}

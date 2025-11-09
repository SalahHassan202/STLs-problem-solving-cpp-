// A. Welcome Set

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll q; cin>> q ;
    set<ll>s ;
    while(q--)
    {
        string w ;     ll x ; 
        cin >> w >> x ;
        if(w=="lower_bound") // >=
        {
            auto it = s.lower_bound(x) ;
            if(it!=s.end())
            cout<<*it << endl;
            else
            cout <<-1 << endl;
            
        }
        else if (w == "upper_bound") // > 
        {
            auto it = s.upper_bound(x);
            if(it!=s.end())
             cout <<*it<< endl;
            else
             cout<<-1 << endl;
            
        }
        else if(w=="find")
        {
            if(s.count(x))
            cout<<"found"<< endl;
            else
            cout<<"not found" << endl;
            
        }
        else // w== "insert"
        s.insert(x) ;
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

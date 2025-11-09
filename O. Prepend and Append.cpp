// O. Prepend and Append

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n ;     cin >> n ;
    string s ;      cin >> s ;
    deque<char>dq;
    for(int i=0;i<n;i++)
    {
        dq.push_back(s[i]);
    }

    while((!dq.empty()) && (dq.front() != dq.back()))
    {
        dq.pop_back() ; 
        dq.pop_front() ;

    }
    cout<<dq.size() <<endl;
    
}
int main()
{
    fast;
    
    ll t = 1 ;
    cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}

// P. Permutation Minimization by Deque

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n ; cin >> n ;
    vector<ll>p(n);
    for(int i=0;i<n ;i++) cin>>p[i] ;
    deque<ll>dq;
    for(int i=0 ;i<n ;i++)
    {
        if(dq.empty())
        {
            dq.push_back(p[i]) ;
        }
        else if (p[i] < dq.front() )
        {
            dq.push_front(p[i]) ;
        }
        else
        {
            dq.push_back(p[i]) ;
        }
    }

    for(auto i :dq)
    {
        cout << i << " " ;
    }
    cout << endl;
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
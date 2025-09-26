// J. Jzzhu and Children

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll n , m ; cin >> n >> m;
    queue<pair<ll,ll>>q ;
    ll y ;
    for(int i=0;i<n ; i++)
    {
        cin>>y;
        q.push(make_pair(y , i+1)) ; // i ===> index    ,,,, i+1 ===> position
    }
    while(q.size()!=1)
    {
        if(q.front().first <= m)
        {
            q.pop();
        }
        else
        {
            q.front().first -=m ;
            q.push(q.front()) ;
            q.pop() ;
        }
    }
    cout<<q.front().second << endl;

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
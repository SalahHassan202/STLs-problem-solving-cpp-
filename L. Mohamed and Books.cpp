// L. Mohamed and Books

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll n ;      cin>>n ;
    deque<ll>dq;
    ll z ;
    for(int i =0;i<n;i++)
    {
        cin>>z ;
        dq.push_back(z);
    }
    priority_queue<ll>pq;
    ll y ;     cin >> y ;
    while(y--)
    {
        char c ;     cin>>c ;
        if(c=='L')
        {
            if(!dq.empty())
            {
                pq.push(dq.front());
                dq.pop_front();
            }

        }
        else if(c=='R')
        {
            if(!dq.empty())
            {
                pq.push(dq.back());
                dq.pop_back();
            }
        }
        else
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
                pq.pop();
            }
            else
            {
                cout << -1<< endl;
            }
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

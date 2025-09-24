// E. Welcome Priority Queue
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
priority_queue<ll>pq;
void solve()
{
    ll t ; cin >> t ;
    while(t--)
    {
        string s ; cin >> s ;
        if(s == "push")
        {
            ll n ; cin >> n ;
            pq.push(n) ;

        }else if (s == "pop")
        {
            if(!pq.empty())
            {
                pq.pop() ;
            }
        }else //(s == "top")
        {
            if(!pq.empty())
            {
                cout << pq.top() << endl;
            }
        }
    }
}

int main()
{
    solve() ;
}
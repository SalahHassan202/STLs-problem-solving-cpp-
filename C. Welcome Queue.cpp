// C. Welcome Queue

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
queue<ll>qu;
void solve()
{
    ll t ;   cin >> t ;
    while(t--)
    {
        ll id , n ; cin >> id >> n ;
        if(id == 1 )
        {
            qu.push(n) ;
        }
        else  // id == 2
        {
            if(qu.empty())
            {
                cout<<"no"<< endl;
            }
            else
            {
                if(qu.front() == n)
                {
                    cout<<"yes"<< endl;
                }
                else
                {
                    cout<<"no"<< endl;
                }
                qu.pop() ;
            }
        }
    }
}
int main()
{
    solve();
}

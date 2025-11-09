// D. Welcome Deque

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
deque<ll>du;
void solve()
{
    ll q ;    cin >> q;
    while(q--)
    {
        string s ;    cin >> s ;
        if(s == "push_back")
        {
            ll n ; cin >> n ;
            du.push_back(n) ;
        }
        else if(s == "push_front")
        {
            ll n ; cin >> n ;
            du.push_front(n) ;
        }
        else if (s == "pop_front")
        {
            if(!du.empty())
                du.pop_front() ;
            
        }
        else if (s == "pop_back")
        {
            if(!du.empty())
                du.pop_back() ;
        }
        else if (s == "front")
        {
            if(!du.empty())
                 cout<<du.front() << endl;
        }
        else if(s == "back")
        {
            if(!du.empty())
                cout<<du.back() << endl;
        }
        else
        {
            ll n ; cin >> n ; 
            n-- ;  //index 
            cout<<du[n] << endl;
        }
    }
}
int main()
{
    solve() ;
}

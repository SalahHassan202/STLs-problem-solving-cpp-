// B. Welcome Stack

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
stack<ll>st ;
void solve()
{
    ll q ;   cin >> q ;
    while(q--)
    {
        string s ; cin >> s ;
        if(s == "push")
        {
            ll n ;cin>> n ;
            st.push(n) ;

        }
        else if(s == "pop")
        {
            if(!st.empty())
            {
                st.pop() ;
            }
        }
        else     // (s == "top")
        {
            if(!st.empty())
            {
                
                cout<<  st.top() << endl;
            }
        }
    }
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    solve() ;
 
    return 0 ;
}
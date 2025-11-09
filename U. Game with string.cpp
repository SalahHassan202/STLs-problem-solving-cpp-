// U. Game with string

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    string s ;       cin >> s;
    stack<char>st;
    ll cnt = 0;
    for(int i = 0 ; i<s.size() ; i++)
    {
        if(!st.empty() && st.top() == s[i])
        {
            st.pop() ; 
            cnt++;
        }
        else
        {
            st.push(s[i]) ;
        }
    }

   cout <<  (cnt%2 !=0 ? "Yes" : "No") << endl ; 
   
}
int main()
{
    fast;
    
    ll t = 1 ;
    // cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}

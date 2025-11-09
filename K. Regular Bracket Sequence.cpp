// K. Regular Bracket Sequence

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    string s ;     cin >> s ;
    stack<char> res ;
    ll ans = 0 ;
   for(int i=0 ; i<s.size() ; i++)
   {
    
        if(s[i] == ')')
        {
            if(!res.empty())
            {
                res.pop() ;
                ans+=2 ;
            } 
        }
        else
        {
            res.push(s[i]);
        }
   }

   cout << ans << endl;
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    solve();
    
    return 0 ;
}

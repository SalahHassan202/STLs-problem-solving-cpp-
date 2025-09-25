// H. Backspace

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    string s ; cin >> s ;
    stack<char> res ;
   for(int i=0 ; i<s.size() ; i++)
   {
    
        if(s[i] == '<')
        {
            if(!res.empty())
            {
                res.pop() ;
            } 
        }
        else
        {
            res.push(s[i]);
        }
   }
    vector<char> v ;
   while(!res.empty())
   {
       v.push_back(res.top()) ;
        res.pop();
   }

   reverse(v.begin() , v.end()) ;      // reverse for vector

   // print element of vector
   for(auto i :v)
   {
        cout <<i ;
   }
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    solve();
    
    return 0 ;
}
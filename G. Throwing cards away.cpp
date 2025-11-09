// G. Throwing cards away

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    int n ;    cin >>n  ;
    queue<ll> q ;
    for(int i = 1 ; i <= n ; i++)
    {
        q.push(i) ;

    }
    while(q.size() != 1)
    {
        // 1 2 3 4 5 6 7   ===> cout 1
        // 2 3 4 5 6 7     ===> pop(2) 
        // 3 4 5 6 7 2     ===> push(2)
        
        cout<<q.front() << " " ;
        q.pop() ;
        q.push(q.front()) ;
        q.pop() ;
    }
    cout << endl; 
    
    cout << q.front() << endl;
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    solve();
    
    return 0 ;
}

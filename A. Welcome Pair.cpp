// A. Welcome Pair

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
bool compare (pair<ll,ll>& a , pair<ll,ll>& b )
{
    if(a.second > b.second)
    {
        return true ;
    }
    else
    {
        return false;
    }
}

void solve()
{
    ll n ; cin >> n ;    //  size
    vector<pair<ll,ll>> v(n) ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i].first >> v[i].second ;
    }

    // sort(v.begin() , v.end()) ;    // sort ordered by x ===> pair(x , y)
    sort(v.begin() , v.end() , compare) ;    // sort ordered by y ===> pair(x , y)

    for(auto i:v)
    {
        cout <<i.first << " " << i.second << endl;
    }
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    solve();
   
    return 0 ;
}
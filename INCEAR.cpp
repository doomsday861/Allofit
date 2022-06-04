/**
 * INCEAR
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run
testcase{
    ll x,y;
    ll cnt=0;
    cin>>x>>y;
    if(x>y)
    {
        ll diff = x-y;
        cnt +=(diff/2);
        if(diff&1)
            cnt+=2;
    }
    else if(x<y)
    {
        cnt = y-x;    
    }
    cout<<cnt<<endl;
        
    
}

    return 0;
}

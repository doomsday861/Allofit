/**
 * 1659C
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
    
    ll n,a,b;
    cin>>n>>a>>b;
    vll v(n);
    ll sum=0;
    for0(i,n){
     cin>>v[i];
     sum +=v[i];
    }
    
    vll pre(n);
    for(ll i =0;i<n;i++)
    {
        if(i==0)
            pre[i] = v[i];
        else
            pre[i] = pre[i-1]+v[i];
    }
     ll ans = b*pre[n-1];
     ll prev =b*v[0];
    for(int i=0;i<n;i++)
    {
        ans = min(ans,prev +(v[i]*a) + (pre[n-1]-pre[i] - ((n-i-1)* v[i]))*b);
        if(i!=n-1)
        {
            prev += (v[i-1]*v[i])*b;    
        }
        
    }
    cout<<ans<<endl;
    
    
    
    
}

    return 0;
}

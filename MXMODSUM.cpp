/**
 * MXMODSUM
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
    ll n,m;
    cin>>n>>m;
    vll v(n);
    for0(i,n)
    cin>>v[i];
    sort(bend(v));
    ll ans =0;
    for0(i,n)
    {
        ll pos2 = v[i] + v[n-1] + (v[i]-v[n-1]%m+m)%m;
        ans = max({ans,pos2});
    }
    cout<<ans<<endl;
}

    return 0;
}

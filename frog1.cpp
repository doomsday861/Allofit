/**
 * atcoder dp A frog1 && frog2
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
vll v;
vll dp;
ll solve(int index,int n,int k)
{
    if(index<=0)
        return 0;
    // if(index<=)
    //     return abs(v[k]-v[0]);
    if(dp[index]!=-1)
        return dp[index];
    ll ans = INT_MAX;
    for(ll i=1;i<=k && index-i>=0;i++)
    {
        ans = min(ans,solve(index-i,n,k)+abs(v[index]-v[index-i]));
        //cout<<index<<" "<<i<<" "<<ans<<endl;
    }
    return dp[index]=ans;
}
int main()
{
    run
ll n,k;cin>>n>>k;
v.resize(n);
for0(i,n)
cin>>v[i];
dp.resize(n+1,-1);
cout<<solve(n-1,n,k);


    return 0;
}

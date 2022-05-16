/**
 * vacation atcoder dp
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
vector<vll>v;
ll dp[100005][3];
ll solve(int i,int n, int prev)
{
    if(i==n)
        return 0;
    int ans = INT_MIN;
    if(dp[i][prev]!=-1)
        return dp[i][prev];
    if(prev==0)
    {
        return dp[i][prev] =  max(solve(i+1,n,1)+v[i][1],solve(i+1,n,2)+v[i][2]);
    }
    if(prev==1)
    {
        return dp[i][prev] = max(solve(i+1,n,2)+v[i][2],solve(i+1,n,0)+v[i][0]);
    }
    if(prev==2)
    {
        return dp[i][prev] = max(solve(i+1,n,0)+v[i][0],solve(i+1,n,1)+v[i][1]);
    }
    return 1;
}
int main()
{
    run
ll n;
cin>>n;
v.resize(n);
for0(i,n)
{
    for0(j,3)
    {
        dp[i][j] = -1;
        ll x;
        cin>>x;
        v[i].pb(x);
    }
}
ll ans = INT_MIN;
for0(i,3)
{
    ans = max(ans,solve(0,n,i));
}
cout<<ans;

    return 0;
}

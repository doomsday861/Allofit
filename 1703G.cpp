/**
 * 1703G
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
ll solve(vll &v, ll idx, ll powtwo,ll k, ll (*dp)[62*1LL])
{
    if(idx==v.size())
        return 0;
    
    if(dp[idx][powtwo]!= -1LL)
        return dp[idx][powtwo];
    if(powtwo <=60)
    {
        ll take = (v[idx]/pow(2,powtwo))-k + solve(v,idx+1,powtwo,k,dp);
        ll nottake = (v[idx]/pow(2,powtwo+1)) + solve(v,idx+1,powtwo+1,k,dp);
        return dp[idx][powtwo] =  max(take,nottake);
    }
    else
    {
        ll take = k*-1 + solve(v,idx+1,powtwo,k,dp);
        ll nottake = solve(v,idx+1,powtwo,k,dp);
        return dp[idx][powtwo] = max(take,nottake);
    }
    return -1;
}
int main()
{
    run
testcase{
    ll n,k;
    cin>>n>>k;
    vll v(n);
    for0(i,n)
    cin>>v[i];
    ll dp[n+1][62];
    memset(dp,-1,sizeof(dp));
    
    cout<<solve(v,0,0,k,dp)<<endl;
    
}

    return 0;
}

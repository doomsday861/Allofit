/**
 * sqrbr
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
    map<ll,ll> mp;
ll rec(int index, int val, int n,vector<vector<int>>&dp)
{
    if(index == n)
        return (val==0);
    if(dp[index][val]!=-1)
        return dp[index][val];
    if(mp[index])
    {
        return dp[index][val] = rec(index+1,val+1,n,dp);
    }
    int no_of_ways = rec(index+1,val+1,n,dp);
    if(val>0)
    {
        no_of_ways += rec(index+1,val-1,n,dp);
    }
    return dp[index][val] = no_of_ways;
}
int main()
{
    run
testcase{
    
    ll n,k;
    mp.clear();
    cin>>n>>k;
    for0(i,k)
    {
        ll x;
        cin>>x;
        mp[x-1]=1;
    }
    vector<vector<int>>dp(2*n+1,vector<int>(2*n+1,-1));
    cout<<rec(0,0,2*n,dp)<<endl;    
}

    return 0;
}

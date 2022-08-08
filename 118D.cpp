/**
 * 118D
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
ll n1,n2,k1,k2;
ll ans =0;
ll dp[104][104][12][12];
ll solve(ll t1, ll t2, ll prev1, ll prev2)
{
    if(t1+t2==(n1+n2) and prev1<=k1 and prev2<=k2)
    {
        return 1;
    }
    else if(prev1>k1 or prev2>k2)
    return 0;
    
    else if(t1>=n1 and t2>=n2)
        return 0;
    
    if(dp[t1][t2][prev1][prev2]!=-1)
        return dp[t1][t2][prev1][prev2];
    
    else if(t1>=n1)
    {
        return dp[t1][t2][prev1][prev2]=solve(t1,t2+1,0,prev2+1)%100000000;
    }
    else if(t2>=n2)
    {
        return dp[t1][t2][prev1][prev2]=solve(t1+1,t2,prev1+1,0)%100000000;
    }
    else
        return dp[t1][t2][prev1][prev2]= (solve(t1+1,t2,prev1+1,0) + solve(t1,t2+1,0,prev2+1))%100000000;
    
   // return ans;
    
}
int main()
{
    run

    cin>>n1>>n2>>k1>>k2;
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,0,0,0);
    return 0;
}

/**
 * 414B
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
#define mod 1000000007
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run

    ll n,k;
    cin>>n>>k;
    ll dp[2001][2001];
    for1(i,n)
    { 
    	for1(j,n)
    	dp[i][j]=0;
    }
    for0(i,n+1)
    dp[1][i] = 1;
    
    for(ll l = 2; l<=k;l++)
    for1(i,n)
    	for(ll j = i; j<=n;j+=i)
    		dp[l][j] = (dp[l][j]+dp[l-1][i])%mod;
 
    ll sum=0;
    for1(i,n)
    {
    	sum= (sum+dp[k][i])%mod;
    }
    cout<<sum%mod;
   

    return 0;
}
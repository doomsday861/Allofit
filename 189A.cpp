/**
 * 189A
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
using namespace std;
int main()
{
    run

ll n,a,b,c;
cin>>n>>a>>b>>c;
ll dp[n+1];
ll ans=0;
for(ll i=0; i <=n;i++)
	dp[i] = INT_MIN;
dp[0]=0;
for(ll i=a;i<=n;i++)
dp[i] = max(dp[i],dp[i-a]+1);
for(ll i = b;i<=n;i++)
dp[i] = max(dp[i],dp[i-b]+1);
for(ll i=c;i<=n;i++)
dp[i] = max(dp[i],dp[i-c]+1);
cout<<dp[n];

    return 0;
}
/**
 * 
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,x;
cin>>n>>x;
vector<ll> v(n);
for(ll i=0; i <n;i++) cin>>v[i];
ll dp[x+1];
for(ll i=0; i <=x;i++)
dp[i] =0;
dp[0] =1;
for(ll i=0;i <n;i++)
{
    for(ll j=v[i];j<=x;j++)
    {
        dp[j] = (dp[j] +dp[j-v[i]])%1000000007;
    }
}
// for(ll i=0;i<=x;i++)
// cout<<dp[i]<<" ";
cout<<dp[x];
    return 0;
}
/**
 * 1637 Removing digits
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll rec(ll x)
{
    if(x==0)
    return 0;
    vector<ll> dp(x+1,INT_MAX);
    dp[0] =0;
    for(ll i=0; i<=x;i++)
    {
        for(char c: to_string(i))
        {
            dp[i] = min(dp[i],dp[i-(c-'0')]+1);
        }
    }
    return dp[x];
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
cout<<rec(n);
    return 0;
}
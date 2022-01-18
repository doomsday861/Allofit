/**
 * 1638cses grid paths
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
vector<vector<char>>v(1001);
vector<vector<ll>>dp(1001);
ll rec(ll a,ll b, ll n)
{
 //   cout << "call";
    if(v[0][0] =='.')
    dp[0][0] = 1;
    else
    {
        dp[0][0] =0;
    }
    
    for(ll i=1; i < n;i++)
    {
        if(v[i][0]=='.')
        {
            dp[i][0] = dp[i-1][0];
        }
        if(v[0][i]=='.')
        {
            dp[0][i] = dp[0][i-1];
        }
    }
    
    for(ll i=1; i <n;i++)
    {
        for(ll j=1; j <n;j++)
        {
            if(v[i][j]=='.')
            {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%1000000007;
            }
        }
    }
    // for(ll i=0; i <n;i++)
    // {
    //     for(ll j=0; j<n;j++)
    //     cout<<dp[i][j];
    //     cout<<endl;
    // }
    return dp[n-1][n-1];
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
for(ll i=0; i <n;i++)
{
    for(ll k=0; k<n;k++)
    {
        char c;
        cin>>c;
        v[i].push_back(c);
        dp[i].push_back(0);
    }
}
 cout<<rec(0,0,n);
    return 0;
}
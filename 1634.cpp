/**
 * 1634 CSES
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
cin >>n>>x;
vector<ll> v(n);
for(int i=0; i < n;i++)
cin>>v[i];
ll dp[x+1];
dp[0] =0;
for(int i=1; i <=x;i++)
dp[i] = INT_MAX;
for(int i=1; i<=x;i++)
{
    for(int j=0;j<n;j++)
    {
        if(v[j]<=i)
        {   
            int temp  = dp[i-v[j]];
            if(temp!=INT_MAX && temp+1 < dp[i])
            dp[i]  = temp+1;
        }
    }
}
if(dp[x]==INT_MAX)
cout<<-1;
else
{
    cout<<dp[x];
}

    return 0;
}
/**
 * mcm
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
int mcm(int i, int j, vector<int>&values, vector<vector<int>>&dp)
{
    if(i==j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int mini = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int steps = values[i-1] * values[j] * values[k] + mcm(i,k,values,dp) +
            mcm(k+1,j,values,dp);
        mini = min(steps,mini);
    }
    return dp[i][j] = mini;
}
int minScoreTriangulation(vector<int>& values) 
{
    int n = values.size();
    int dp[n][n];
    for(int i =0;i<n;i++)
        dp[i][i] =0;
    int ans = INT_MAX;
    for(int i= n-1;i>=1;i--)
    {
        for(int j = i+1;j<n;j++)
        {
            ans = INT_MAX;
            for(int k = i;k<j;k++)
            {
                int steps = values[i-1] * values[j] * values[k] + dp[i][k]+dp[k+1][j];
                ans = min(steps,ans);
            }
            dp[i][j] = ans;
        }
    }
    return dp[1][n-1];
}
int main()
{
    run

ll n;
cin>>n;
vector<int> values(n);
for0(i,n)
cin>>values[i];
cout<<minScoreTriangulation(values);

    return 0;
}

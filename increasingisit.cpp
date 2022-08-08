/**
 * increasing is it?
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
int dp[1004][104];
int mod = 1000000007;
bool isval(int i, int j, int prev,vector<vector<int>>&grid )
{
    return (i>=0 and j>=0 and i<grid.size() and j<grid[i].size() and prev< grid[i][j]);
}
int dfs(int i, int j,int prev, vector<vector<int>>&grid)
{
    if(!isval(i,j,prev,grid))
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int down = dfs(i+1,j,grid[i][j],grid)%mod;
    int up = dfs(i-1,j,grid[i][j],grid)%mod;
    int left = dfs(i,j-1,grid[i][j],grid)%mod;
    int right = dfs(i,j+1,grid[i][j],grid)%mod;
    return dp[i][j] = (1 + down + up+left+right)%mod;
}
int solve(vector<vector<int>>& grid) {
    int ans =0;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[i].size();j++)
        {
            ans = (ans + dfs(i,j,0,grid))%mod;
        }
    }
    return ans;
}
int main()
{
    run
    int m, n;
    cin>>m>>n;
    vector<vector<int>>grid(m);
    for0(i,m)
    {
        for0(i,n)
        {
            int x;
            cin>>x;
            grid[i].pb(x);
        }
    }
    cout<<solve(grid);

    return 0;
}

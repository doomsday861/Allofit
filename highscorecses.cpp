/**
 * HIGH SCORES BELLMAN FORD
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll adj[5001][5001];
bool vis[5001];
ll dp[5001][5001];
ll n, m;
void init()
{
    for(ll i=0; i <3000;i++)
    {
        vis[i] =0;
        for(ll j=0; j <3000;j++)
        {
            dp[i][j] =INT_MAX;
            adj[i][j] =0;
        }
    }
}   
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin >>n>>m;
for(ll i=0; i  < m;i++)
{
    ll a,b,c;
    cin >>a>>b>>c;
    c *=-1;
    adj[a][b] = c;
}
`
 
    return 0;
}
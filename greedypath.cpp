/**
 * the greedy path
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
void dfs(int src, vector<int>&A, vector<vector<int>>&adj,vector<bool>&vis, int& ans,int C, int good)
{
    if(C<good+A[src-1])
        return;
    // check if it is leaf
    if(adj[src].size()==1 and !vis[src])
    {
        ans++;
        return;
    }
    vis[src]=1;
    for(auto child : adj[src])
    {
        if(!vis[child])
        {
            dfs(child,A,adj,vis,ans,C,good+A[src-1]);
        }
    }
    return;
}
int solve(vector<int> &A, vector<vector<int> > &B, int C) {
    vector<vector<int>>adj(A.size()+1);
    for(int i=0; i < B.size();i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    int ans=0;
    vector<bool>vis(A.size()+1,0);
    dfs(1,A,adj,vis,ans,C,0);
    return ans;
}
int main()
{
    run
    ll n;
    cin>>n;
    vector<int>A(n);
    for0(i,n)
    cin>>A[i];
    ll m;
    cin>>m;
    vector<vector<int>>B(m);
    for0(i,m)
    {
        ll x,y;
        cin>>x>>y;
        B[i].pb(x);  
        B[i].pb(y); 
    }
    ll k;
    cin>>k;
    cout<<solve(A,B,k);
    

    return 0;
}

/**
 * cycle
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
bool dfs(int src,int parent, vector<vector<int>>&adj,vector<bool>&vis) //performing dfs on every unvisited node
{
    vis[src] = 1;
    for(int child : adj[src])
    {
        if(!vis[child])
        {
            if(dfs(child,src,adj,vis)) // recursive check whether there is a cycle or not
            return true;
        }
        else
        {
            if(child!=parent) // if we meet the same node again, then there is a cycle
            return true;
        }
    }
    return false;
}
int solve(int A, vector<vector<int> > &B) {
    vector<bool>vis(A+1,0);
    vector<vector<int>>adj(A+1);
    for(auto x:B)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    for(int i = 1; i <=A;i++)
    {
        if(!vis[i]) // if the node has not been visited previously
        {
            if(dfs(i,-1,adj,vis))
            {
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
    run
 int A;
 cin>>A;
 int M;
 cin>>M;
 vector<vector<int>>edge(M);
 for0(i,M)
 {
    int x,y;
    cin>>x>>y;
    edge[i].pb(x);
    edge[i].pb(y);
 }
 cout<<solve(A,edge);

    return 0;
}

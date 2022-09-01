/**
 * longestflightroute cses
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
vector<vll>backtrack;
vll par;
void brute(vector<vll> &adj, vll &parent, vll &dist, vll &indegree, vll &prev, ll n)
{
    queue<int>q;
    for(ll i=1;i<=n;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        for(auto child:adj[cur])
        {
            indegree[child]--;
            if(indegree[child]==0)
            {
                q.push(child);
            }
            int curmax = INT_MIN;
            int suitable = -1;
            for(auto parent: backtrack[child])
            {
                if(dist[parent]+1 > curmax)
                {
                    curmax = dist[parent]+1;
                    suitable = parent;
                }
            }
            dist[cur] =  curmax;
            if(cur==1) dist[cur] = 1;
            parent[cur] = suitable;
        }
    }
}
int main()
{
    run
    vll dist;
    vll indegree;
    ll n,m;
    cin>>n>>m;
    vector<vll>adj(n+1);
    vll prev(n);
    backtrack.resize(n+1);
    par.resize(n);
    for0(i,n+1)
    {
        dist.pb(INT_MIN);
        indegree.pb(0);
        prev[i]=-1;
    }
    for0(i,m)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].pb(y);
        indegree[y]++;
        backtrack[y].pb(x);
    }
    brute(adj,par,dist,indegree,prev,n);
    ll cur = n;
    stack<int>ans;
    bool pos =0;
    if(cur==1) pos = 1;
    for(auto x:par)
        cout<<x<<" ";
    while(cur!=-1 and dist[cur]>=0)
    {
        ans.push(cur);
        cur = par[cur];
        if(cur==1) pos = 1;
    }
    if(!pos)
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<dist[n]<<endl;
    while(!ans.empty())
    {
        cout<<ans.top()<<" ";
        ans.pop();
    }
    
    return 0;
}

/**
 * MESSAGE ROUTE CSES
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll n,m;
vector<bool> vis(100009);
vector<vector<ll>> edge(100009);
vector<ll> path;
vector<ll> parent(100009);
bool found =0;
vector<ll> papa;

void init()
{
    for(ll i=0 ; i <n;i++)
        vis[i] = 0;
}
void dfs(ll x)
{
    vis[x] = 1;
    for (auto v : edge[x])
    {
        if (!vis[v])
            {
                path.push_back(v);
                if (v == n)
                    {
                        found =1;
                        return;
                    }
                dfs(v);
            }
    }
}
void bfs()
{
    vis[1] =1;
    queue<ll> q;
    q.push(1);
    while(!q.empty())
    {
        ll u = q.front();
        q.pop();
        for(auto v: edge[u])
        {
            if(!vis[v])
            {
                vis[v] = true;
                q.push(v);
                parent[v]  = u;
            }
        }
    }
}
void pathfinder()
{
    ll cur = n;
    while(cur!=-1)
    {
        papa.push_back(cur);
        cur = parent[cur];
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin>>n>>m;
for(ll i=0; i<m;i++)
{
    ll x,y;
    cin>>x>>y;
    edge[x].push_back(y);
    edge[y].push_back(x);
    //parent[y] =x;

}

path.push_back(1);
dfs(1);
parent[1] = -1;
if(!found)
{
    cout<<"IMPOSSIBLE";
    return 0;
}
init();
bfs();
// for (ll i = 1; i <=n; i++)
//     cout << parent[i] << " ";
pathfinder();
cout<<papa.size()<<endl;
reverse(papa.begin(),papa.end());
for(auto i: papa)
cout<<i<<" ";

    return 0;
}
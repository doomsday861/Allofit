/**
 * message route cses
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
vll parent(100006);
vector<vll> adj(1000006);
bool vis[1000006];
ll dist[1000006];
void bfs(ll s)
{
	vis[s]= 1;
	queue<ll> q;
	q.push(s);
	while(!q.empty())
	{
		ll v = q.front();
		q.pop();
		for(auto u:adj[v])
		{
			if(!vis[u])
			{
				parent[u] = v;
				dist[u] = dist[v] + 1;
				vis[u] = 1;
				q.push(u);
			}
		}
	}
	return;
}
int main()
{
    run

    ll n,m;
    cin>>n>>m;
    while(m--)
    {
    	ll a,b;
    	cin>>a>>b;
    	adj[a].pb(b);
    	adj[b].pb(a);
    }
 	bfs(1);
   	if(!vis[n])
   	{
   		cout<<"IMPOSSIBLE";
   		return 0;
   	}
    cout<<dist[n]+1<<endl;
    ll x= n;
    vll ans;
    while(x!=1)
    {
    	ans.pb(parent[x]);
    	x = parent[x];
    }
    reverse(bend(ans));
    ans.pb(n);
    for(auto x:ans)
    {
    	cout<<x<<" ";
    }
   

    return 0;
}
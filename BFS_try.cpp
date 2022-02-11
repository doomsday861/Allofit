/**
 * BFS
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
bool vis[100];
queue<ll> q;
ll dis[100];
ll p[100];
vector<vector<ll>> adj(100);
void bfs(ll s)
{
	vis[s] = 1;
	q.push(s);
	p[s] = -1;
	dis[s] = 0;
	while(!q.empty())
	{
		ll v = q.front();
		q.pop();
		for(auto u:adj[v])
		{
			if(!vis[u])
			{
				vis[u] =1;
				q.push(u);
				p[u] = v;
				dis[u] = dis[v]+1; 
			}
		}
	}
	return;
}
int main()
{
    run
    ll n;
    cin>>n;
    for0(i,n)
    {
    	ll a,b;
    	cin>>a>>b;
    	adj[a].pb(b);
    	//adj[b].pb(a);
    }

    bfs(1);
    for1(i,n)
    {
    	cout<<"NODE = "<<i<<" PARENT = "<<p[i]<<" DISTANCE = "<<dis[i]<<endl;
    }

    return 0;
}
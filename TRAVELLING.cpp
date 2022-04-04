/**
 * TRAVELLING codechef
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
vector<vector<pair<int,int>>> adj;
vector<bool> vis;
ll n;
void bfs(ll s)
{
	queue<ll> q;
	q.push(s);
	vis[s]=1;
	while(!q.empty())
	{
		ll u = q.front();
		q.pop();
		for(auto x:adj[u])
		{
			if(!vis[x.fi])
			{
				vis[x.fi]=1;
				q.push(x.fi);
			}
		}
	}
}
void djikstra(ll src,ll dest)
{
	vll arrival(n+1,1e9);
	vll departure(n+1,1e9);
	vll visited(n+1,0);
	arrival[src] = 0;
	set<pair<ll,ll>>s;
	s.insert({0,src});
	while(!s.empty())
	{
		auto x = *(s.begin());
		s.erase(x);
		visited[x.se] = 1;
		departure[x.se] = arrival[x.se];
		for(auto it:adj[x.se])
		{
			if(arrival[it.fi] > departure[x.se]+it.se)
			{
				s.erase({arrival[it.fi],it.fi});
				arrival[it.fi] = departure[x.se]+it.se;
				s.insert({arrival[it.fi],it.fi});
			}
		}	
	} 
	cout<<arrival[dest]<<endl;
}
int main()
{
    run

    
 testcase
  {
  	ll m;
  	cin>>n>>m;
  	adj.clear();
  	adj.resize(n);
  	vis.resize(n);
  	for0(i,n)
  	vis[i]=0;
  	for0(i,m)
  	{
  		ll x,y;
  		cin>>x>>y;
  		--x;--y;
  		adj[x].pb({y,0});
  		adj[y].pb({x,0});
  		if(abs(x-y)==1)
  		{
  			vis[min(x,y)]=1;
  		}
  	}
  	for0(i,n-1)
  	{
  		if(!vis[i])
  		{
  			adj[i].pb({i+1,1});
  			adj[i+1].pb({i,1});
  		}
  	}
  	djikstra(0,n-1);
  	
}
   

    return 0;
}


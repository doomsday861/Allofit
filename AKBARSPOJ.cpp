/**
 * AKBAR SPOJ
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
vector<vector<ll>> adj;
queue<ll> q;
vector<bool> vis;
ll n,r,m;
vector<vector<ll>> strength;
void init()
{
	adj.clear();
	vis.resize(n,0);
	strength.resize(n);
	for(ll i=0;i<n;i++)
	{
		strength[i].resize(1);
	}
}
void dfs(ll s)
{
	vis[s] = 1;
	q.push(s);
	while(!q.empty())
	{
		ll v = q.front();
		q.pop();
		for(ll i =0; i < adj[v].size();i++)
		{
			if(!vis[adj[v][i]])
			{
				vis[adj[v][i]] = 1;
				q.push(adj[v][i]);
			}
		}
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 testcase
  {
  	cin>>n>>r>>m;
  	init();
  	for(ll i=0;i<r;i++)
  	{
  		ll x,y;
  		cin>>x>>y;
  		adj[x].push_back(y);
  		adj[y].push_back(x);
  	}
  	for(ll i=0; i <m;i++)
  	{
  		ll x,y;
  		cin >> x>>y;
  		if(y==0)
  		{
  			vis[x] = 1;
  			continue;
  		}
  		
  	}
}
    return 0;
}
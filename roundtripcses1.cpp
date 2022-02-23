/**
 * round trips
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
vector<vll> adj(100005);
ll start,ender;
bool vis[100005];
vll parent(100005);
ll n,m;
bool dfs(ll s,ll p)
{
	vis[s] = 1;
	parent[s] = p;
	for(auto u:adj[s])
	{
		if(u==p)
			continue;
		if(vis[u])
		{
			start = u;
			ender = s;
			return true;
		}
		if(!vis[u])
		{
			if(dfs(u,s))
				return true;
		}
	}
	return false;
}
bool checkall()
{
	for1(i,n)
	{
		if(!vis[i])
		{
			if(dfs(i,-1))
				return true;
		}
	}
	return false;
}
int main()
{
    run

cin>>n>>m;
while(m--)
{
	ll a,b;
	cin>>a>>b;
	adj[a].pb(b);
	adj[b].pb(a);
}
if(!checkall())
{
	cout<<"IMPOSSIBLE";
	return 0;
}
vll ans;
//cout<<start<<" "<<ender<<endl;
ll f = ender;
ans.pb(f);
while(f!=start)
{
	if(f==-1)
		break;
	ans.pb(parent[f]);
	f= parent[f];
}
ans.pb(ender);
cout<<ans.size()<<endl;
for(auto x: ans)
cout<<x<<" ";
   

    return 0;
}
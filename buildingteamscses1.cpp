/**
 * building teams
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
vector<vll> adj;
bool vis[100005];
vll color(100005,0);
bool f=0;
void coloring(ll n)
{
	queue<ll> q;

	for1(i,n)
	{
		if(color[i]==0)
		{
			q.push(i);
			color[i] = 1;
			while(!q.empty())
			{
				ll v = q.front();
				q.pop();
				for(auto u:adj[v])
				{
					if(color[u]==0)
					{
						if(color[v]==1)
							color[u] =2;
						else
							color[u] = 1;
						q.push(u);
					}
					else
					{
						if(color[u]==color[v])
							{
//								cout<<u<<" "<<v<<endl;
								f=1;
								return;
							}
					}
				}
			}
		}
	}
}
int main()
{
    run

    ll n,m;
 	cin>>n>>m;
 	adj.resize(n+1);
 	// for1(i,n)
 	// adj[i].resize(n+1);
 	while(m--)
 	{
 		ll a,b;
 		cin>>a>>b;
 		adj[a].pb(b);
 		adj[b].pb(a);
 	}
 	// for(auto x:adj)
 	// {
 	// 	for(auto v:x)
 	// 	{
 	// 		cout<<v<<" ";
 	// 	}
 	// 	cout<<endl;
 	// }
   coloring(n);
   if(f)
   {
   	cout<<"IMPOSSIBLE";
   	return 0;
   }
   for1(i,n)
   {
   	cout<<color[i]<<" ";
   }

    return 0;
}
/**
 * flight routes cses
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
ll n,m,k;
vector<vector<pair<ll,ll>>> g;
vector<vll> dist;
const ll INF = 9e15;
void dij()
{
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>>pq;
	pq.push({0,1});
	while(!pq.empty())
	{
		ll u =pq.top().se;
		ll d =pq.top().fi;
		pq.pop();
		if(dist[u][k-1] < d)
			continue;
		for(auto e:g[u])
		{
			ll v = e.fi;
			ll c = e.se;
			if(dist[v][k-1] > c+d)
			{
				dist[v][k-1] = c+d;
				pq.push({dist[v][k-1],v});
				sort(bend(dist[v]));
			}
		}
	}
}
int main()
{
    run
    cin>>n>>m>>k;
    g.resize(n+1);
    dist.resize(n+1);
    for1(i,n)
    {
    	dist[i].resize(k);
    	for0(j,k)
    	dist[i][j] = INF;
    }
    for0(i,m)
    {
    	ll u,v,c;
    	cin>>u>>v>>c;
    	g[u].pb({v,c});
    }
    dij();
    for0(i,k)
    {
    	cout<<dist[n][i]<<" ";
    }
    

    return 0;
}
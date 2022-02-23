/**
 * flight discounts cses
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
#define INF 9e17
ll n,m;
vector<vector<pair<ll,ll>>> adj;
vll disc;
vll dist;
void djikstra(ll s)
{
	priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>> pq;
	dist.resize(n+1,INF);
	disc.resize(n+1,INF);
	pq.push({0,{1,0}});
	dist[s] =disc[s] =0;
	while(!pq.empty())
	{
		ll d = pq.top().fi; // current cost
		ll u = pq.top().se.fi; // source
		ll f = pq.top().se.se; // flag for coupon used
		pq.pop();
		if(f)
		{
			if(disc[u] < d)
				continue;
		}
		if(!f)
		{
			if(dist[u]<d)
				continue;
		}
		for(auto e:adj[u])
		{
			ll v = e.fi; // destination
			ll c = e.se; // cost to reach destination
			if(!f)
			{
				if(dist[v] > c + d)
				{
					dist[v] = c+d;
					pq.push({dist[v],{v,0}});
				}
				if(disc[v] > d + c/2)
				{
					disc[v] = d + c/2;
					pq.push({disc[v],{v,1}});
				}
			}
			else
			{
				if(disc[v] > c+d)
				{
					disc[v] = c+d;
					pq.push({disc[v],{v,1}});
				}
			}
		}

	}
	cout<<disc[n];
	
}
int main()
{
    run
    cin>>n>>m;
    adj.resize(n+1);
    while(m--)
    {
    	ll a,b,c;
    	cin>>a>>b>>c;
    	adj[a].pb({b,c});
    }

    djikstra(1);
   

    return 0;
}
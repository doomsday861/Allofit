/**
 * 893C
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
ll cost[100001];
bool vis[100001];
ll n,m;
vector<vector<ll>> adj(100001);
ll bfs(ll s)
{
	 ll ans = cost[s];
	 queue<ll> q;
	 ll counter=1;
	 q.push(s);
	 vis[s] =1;
	 while(!q.empty())
	 {
	 	ll v = q.front();
	 	q.pop();
	 	for(auto u:adj[v])
	 	{
	 		if(!vis[u])
	 		{
	 			counter++;
	 			vis[u] =1;
	 			q.push(u);
	 			ans = min(ans,cost[u]);
	 		}
	 	}
	 }
	 return counter;
}
int main()
{
    run

cin>>n>>m;
for1(i,n) cin>>cost[i];
for0(i,m){
	ll a,b;
	cin>>a>>b;
	adj[a].pb(b);
	adj[b].pb(a);
}
ll ans=0;
for1(i,n)
{
	if(!vis[i])
	{
		ans +=bfs(i);
//		cout<<i<<" "<<ans<<endl;
	}
}
cout<<ans;


   

    return 0;
}
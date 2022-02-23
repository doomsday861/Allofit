/**
 * BUILDING ROADS CSES
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
bool vis[100006];
ll n,m;
vector<vll>adj(100006);
void bfs(ll s)
{
	vis[s]=1;
	queue<ll> q;
	q.push(s);
	while(!q.empty())
	{
		ll v= q.front();
		q.pop();
		for(auto x: adj[v])
		if(!vis[x])
		{
			bfs(x);
		}
	}
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

    ll ans=0;
    vector<pair<ll,ll>> v;
    ll first=1;
    ll last=0;
    for1(i,n)
    {
    	if(!vis[i])
    		{
    			bfs(i);
    			ans++;
    			if(i==1)
    			continue;
    			last = i;
    			v.pb({first,last});
    			first = last;
    		}
    }
    cout<<ans-1<<endl;
    for(ll i=0; i <v.size();i++)
    {
    	cout<<v[i].fi<<" "<<v[i].se<<endl;
    }


    return 0;
}
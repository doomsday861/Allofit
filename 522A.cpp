/**
 * 522A
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
map<string,ll> mp;
bool vis[202];
ll ans=0;
ll dfs(ll x)
{
	queue<ll>q;
	q.push(x);
	ans++;
	vis[x]=1;
	while(!q.empty())
	{
		ll u = q.front();
		q.pop();
		for(auto e:adj[u])
		{
			if(!vis[e])
			{
				q.push(e);
				vis[e] =1;
				ans++;
			}
		}
	}
	return ans;
}
int main()
{
    run

   ll n;
   cin>>n;
   adj.resize(202);
   ll counter =1;
   ll ans=1;
   mp["polycarp"] = 1;
   for0(i,n)
   {
   	string a,b,c;
   	cin>>a>>b>>c;
   	ll x,y;
    transform(bend(a), a.begin(), ::tolower);
    transform(bend(c),c.begin(),::tolower);
   	mp[a] = mp[c]+1;
   	if(mp[a]>ans)
   		ans = mp[a];
   }
   cout<<ans;

    return 0;
}
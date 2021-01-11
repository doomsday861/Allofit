/**
 * SCALSUM PARTIAL MEH
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
vector<ll> tree[100001];
bool vis[100001];
ll parent[100001];

void bfs()
{
	queue<pair<ll,ll>> q;
	q.push({1,-1});
	while(!q.empty())
	{	
		pair<ll,ll> p = q.front();
		q.pop();
		parent[p.first] = p.second;
		vis[p.first] = true;
		for(ll child : tree[p.first])
		{
			if(!vis[child])
			{
				q.push({child,p.first});
			}
		}	
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,qs;
ll MOD =4294967296;
cin>>n>>qs;
ll weight[n];
for(ll i=0;i<n;i++)
cin>>weight[i];
for(ll i=1;i<n;i++)
{
	ll x,y;
	cin>>x>>y;
	tree[x].push_back(y);
	tree[y].push_back(x);
}
bfs();
while(qs--)
{
	ll x,y;
	cin>>x>>y;
	ll scalar=0;
	while(parent[x]!=-1)
	{
		scalar = (scalar +(weight[x-1]*weight[y-1])%MOD)%MOD;
		x = parent[x];
		y = parent[y];
	}
	scalar = (scalar +(weight[x-1]*weight[y-1])%MOD)%MOD;
	cout<<scalar<<endl;
}

    return 0;
}
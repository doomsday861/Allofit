	/**
 * ARYA'S STUNT HACKEREARTH
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool vis[10001];
ll st[10001];
ll cn=0;
ll maxi=0;
ll id=0;
vector <ll> adj[10001];
vector<ll> idv;
void dfs(ll s)
{
	vis[s]=true;
	for(ll i =0 ;i<adj[s].size();i++)
	{
		if(!vis[adj[s][i]])
			{	
				cn +=st[adj[s][i]];
				if(maxi<st[adj[s][i]])
				{
					maxi = st[adj[s][i]];
					id = adj[s][i];
				}
				if(maxi==st[adj[s][i]])
				{
					if(id>adj[s][i])
						id = adj[s][i];
				}
				dfs(adj[s][i]);
			}
	}
}

int main()
{
#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
ll v,e;
cin >> v>>e;
memset(adj,0,sizeof(adj));
memset(vis,0,sizeof(vis));
for(ll i =1 ; i <=v;i++)
{
	cin >> st[i];
}
for(ll i =0 ;i<e;i++)
{
	ll x,y;
	cin >> x>>y;
	adj[x].push_back(y);
	adj[y].push_back(x);
}
ll k =0,in=0;
memset(vis,0,sizeof(vis));
for(ll i =1 ; i <=v;i++)
{
	if(!vis[i])
	{
		id = i;
		maxi = st[i];
		cn = st[i];
		vis[i]=true;
		dfs(i);
		k +=maxi;
		in +=(cn-maxi);
		idv.push_back(id);
	}
}
sort(idv.begin(),idv.end());
cout<<k <<" "<<in<<endl;
for(ll i =0 ; i < idv.size();i++)
{
	cout<<idv[i]<<" ";
}
//timee
    return 0; 
} 
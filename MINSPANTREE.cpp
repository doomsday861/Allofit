	/**
 * MINIMUM SPANNING TREE also first time pair bois
 * Kartikeya (doomsday861)
 * KRUSKAL'S ALGORITHM.
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool vis[100001];
vector <ll>adj[100001];
ll id[100001],nodes,edges;
pair<ll,pair<int,int>>p[100001];
void init()
{
	for(ll i =0 ; i < 100001;i++)
		id[i]= i;
}
ll root(ll x)
{
	while(id[x]!=x)
	{
		id[x]= id[id[x]];
		x= id[x];
	}
	return x;
}
void union1(ll x, ll y)
{
	ll p = root(x);
	ll q= root(y);
	id[p] = id[q];
}
ll kruskal(pair<ll,pair<int,int>>p[])
{
	ll x,y;
	ll c,minc =0;
	for(ll i =0 ;i<edges;i++)
	{
		x = p[i].second.first;
		y = p[i].second.second;
		c = p[i].first;
		if(root(x)!=root(y))
		{
			minc +=c;
			union1(x,y);
		}
	}
	return minc;
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
testcase
{
init();
  	cin >>nodes>>edges;
  	for(ll i =0 ; i<edges;i++)
  	{
  		ll x,y,w;
  		cin>>x>>y>>w;
  		p[i]= make_pair(w,make_pair(x,y));
  	}
  	sort(p,p+edges);
  	ll minc = kruskal(p);	
  	cout<<minc<<endl;
//timee
}
    return 0; 
} 
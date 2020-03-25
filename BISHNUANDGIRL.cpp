	/**
 * BISHNU AND GF CPP
 * Kartikeya (doomsday861)
 * 
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool v[1000];
ll counter=0;
vector<ll> dis;
vector<ll> adj[1000];
ll l[1000];
void dfs(ll s)
{	
	v[s]=true;
	l[s]++;
	for(ll i=0 ; i < adj[s].size();i++)
	{	
		if((!v[adj[s][i]]))
			{	
				l[adj[s][i]]= l[s];	
				dfs(adj[s][i]);
			}
	}
}
void init()
{
	memset(v,0,sizeof(v));
	counter=0;
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
 ll n;
 cin >> n; 
 for(ll i =1 ; i <n ; i++)
{	
	ll x,y;
	cin >> x>>y;
	adj[x].push_back(y);
	adj[y].push_back(x);	
}
ll d;
cin >> d;
ll ar[d];
ll minm=INT_MAX;
ll mini=0;
dfs(1);
for(ll i=0 ; i <d;i++)
{
	cin >> ar[i];
	if(v[ar[i]])
	minm = min(minm,l[ar[i]]);
}
	cout<<minm+1<<endl;
//timee
    return 0; 
} 
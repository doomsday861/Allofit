	/**
 * MST WITH PRIM
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool marked[100001];
vector <pair<ll,ll>>adj[100001];
ll counter=0;
ll id[100001],nodes,edges;
ll prim(ll x)
{
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> Q;
	ll y;
	ll minc=0;
	pair<ll,ll>p;
	Q.push(make_pair(0,x));
	while(!Q.empty())
	{
		p = Q.top();
		Q.pop();
		x = p.second;
		if(marked[x]==true)
			continue;
		minc += p.first;
		marked[x]=true;
		for(ll i =0;i<adj[x].size();++i)
		{
			y = adj[x][i].second;
			if(marked[y]==false)
			{
				Q.push(adj[x][i]);
			}	
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
cin>>nodes>>edges;
for(ll i =0 ; i <edges;i++)
{
	ll x,y,w;
	cin>> x>>y>>w;
	adj[x].push_back(make_pair(w,y));
	adj[y].push_back(make_pair(w,x));
}
	ll minc = prim(1);
cout<<minc<<endl;
//timee
    return 0; 
} 
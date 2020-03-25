	/**
 * SOCIAL NETWORKING GRAPH
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
bool v[100001];
vector<ll> adj[100001];
ll level[100001];
ll freq[1000001];
void initialize()
{
	memset(v,0,sizeof(v));
	//memset(adj,0,sizeof(adj));
	memset(level,0,sizeof(level));
	memset(freq,0,sizeof(freq));
}
void bfs(ll s)
{
	queue<ll> q;
	q.push(s);
	v[s]=true;
	level[s]=0;
	while(!q.empty())
	{
		ll p = q.front();
		q.pop();
		for(ll i =0 ; i < adj[p].size();i++)
		{
			if(!v[adj[p][i]])
			{
				q.push(adj[p][i]);
				level[adj[p][i]] = level[p]+1;
				freq[level[p]+1]++;
				v[adj[p][i]]=true; 
			}
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
 ll n,e;
 cin >> n >>e;
 for(ll i=0;i<e;i++)
 {	
 	ll x,y;
 	cin >> x>>y;
 	adj[x].push_back(y);
 	adj[y].push_back(x);
 }
 ll m;
 cin >> m;
 for(ll i =0 ; i < m ; i++)
 {
 	ll s,d;
 	cin >> s>>d;
 	bfs(s);
 	cout<<freq[d]<<endl;
 	initialize();
 }
//timee
    return 0; 
} 
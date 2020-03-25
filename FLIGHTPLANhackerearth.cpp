	/**
 * THE FLIGHT PLAN Hackerearth
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
ll level[10001];
bool v[10001];
vector<ll> adj[10001];
vector<ll> dis[10001];
ll pred[10001];
void intit()
{
	memset(pred,-1,sizeof(pred));
	memset(level,0,sizeof(level));
}
void bfs(ll s)
{
	queue<ll> q;
	q.push(s);
	v[s]= true;
	level [s]=1;
	while(!q.empty())
	{
		ll p = q.front();
		q.pop();
		for(ll i =0 ;  i<adj[p].size();i++)
		{
			if(!v[adj[p][i]])
			{
				q.push(adj[p][i]);
				level[adj[p][i]]= level[p]+1;
				v[adj[p][i]]=true;
				pred[adj[p][i]] = p;
			}
		}
	}
}
void printp(ll s,ll d)
{
	vector<ll> path;
	ll c=d;
	path.push_back(c);
	while(pred[c]!=-1)
	{
		path.push_back(pred[c]);
		c = pred[c];
	}
	cout<<level[d]<<endl;
	for(ll i = path.size()-1;i>=0;i--)
	{
		cout<<path[i]<<" ";
	}
	cout<<endl;
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
 ll n,m,t,c;
 cin >> n >>m>>t>>c;
 intit();
 for(ll i =0 ; i <  m ; i++)
 {
 	ll x,y;
 	cin >> x>>y;
 	adj[x].push_back(y);
 	adj[y].push_back(x);
 }
 ll a,b;
 cin >> a>>b;
 bfs(a);
 printp(a,b);
//timee
    return 0; 
} 
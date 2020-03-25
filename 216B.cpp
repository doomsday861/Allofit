	/**
 * 216 B codeforces
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
bool v[10001];
vector<ll> adj[10001];
ll l[10001];
ll pred[10001];
ll f;
void bfs(ll s)
{
	v[s] = true;
	queue<ll> q;
	q.push(s);
	l[s]=1;
	while(!q.empty())
	{	
		ll p = q.front();
		q.pop();
		for(ll i =0 ; i < adj[p].size();i++)
		{
			if(!v[adj[p][i]])
			{
				v[adj[p][i]]=true;
				q.push(adj[p][i]);
				l[adj[p][i]]= l[p]+1;
				if ((l[p]+1)==2)
					f++;
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
 ll n,m;
 cin >> n >> m;
for(ll i = 0 ; i < m ; i++)
{
	ll x,y;
	cin >> x>>y;
	adj[x].push_back(y);
	adj[y].push_back(x);		
}
bfs(1);
cout << f<<endl;
f=0;
//timee
   return 0; 
} 
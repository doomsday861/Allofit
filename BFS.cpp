	/**
 * BFS PRACTICE
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
ll l[100001];
ll f[100001];
vector<ll> adj[10001];
bool v[100001];
void bfs(ll n)
{
	queue<ll> q;
	q.push(n);
	l[n]=1;
	v[n]= true;
	while(!q.empty())
	{
		ll p = q.front();
		q.pop();
		for(ll i =0 ; i < adj[p].size();i++)
		{
			if(!v[adj[p][i]])
			{
				l[adj[p][i]]= l[p]+1;
				f[l[p]+1]++;
				q.push(adj[p][i]);
				v[adj[p][i]]= true;
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
 ll n;
 cin >>n;
 for(ll i= 0 ; i < n-1;i++)
 {
 	ll x,y;
 	cin >> x >>y;
 	adj[x].push_back(y);
 	adj[y].push_back(x);
 }
 bfs(1);
 ll x;
 cin >> x;
 cout<<f[x]<<endl;
//timee
    return 0; 
} 
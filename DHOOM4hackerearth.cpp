		/**
	 * DHOOM4 HACKEREARTH
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
	vector <ll> adj[100001];
	ll level[100001];
	void dfs(ll s)
	{
		v[s]=true;
		queue<ll> q;
		q.push(s);
		v[l]=1;
		while(!q.empty())
		{
			ll p = q.front();
			q.pop();
			for(ll i = 0 ; i < adj[p].size();i++)
			{
				if(!v[adj[p][i]])
				{
					q.push(adj[p][i]);
					v[adj[p][i]]=true;
					leve[adj[p][i]]= level[p]+1;
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
	 ll x,y,z;
	 cin >> x>>y>>z;
	 ll ar[z];
	 

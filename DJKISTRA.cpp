
	/**
 * DJIKSTRA HACKEREARTH
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
vector<pair<ll,ll>> v[100001];
ll c =100000001;
bool vis[1000009];
ll dis[1000009];
void init(ll n)
{
	for(ll i =0 ; i < n;i++)
	{
		vis[i] =false;
		dis[i]= 1000000000;
	}
}
void djikstra()
{
	dis[1]=0;
	multiset<pair<ll,ll>> s;
	s.insert({0,1});
	while(!s.empty())
	{
		pair <ll,ll> p = *s.begin();
		s.erase(s.begin());
		ll x = p.second;
		// ll wei = p.first;
		if(vis[x])
			continue;
		vis[x]=true;
		for(ll i =0 ; i <v[x].size();i++)
		{
			ll e = v[x][i].second;
			ll w = v[x][i].first;
			if(dis[x]+w <dis[e])
			{
				dis[e] = dis[x]+w;
				s.insert({dis[e],e});
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
 ll no,e;
 cin >>no>>e;
  init(no+1);	
 for(ll i =0 ; i < e;i++)
 {
 	ll a,b,c;
 	cin >> a>>b>>c;
 	v[a].push_back({c,b});
 }
 djikstra();
 for(ll i =2 ;i <=no;i++)
 	cout<<dis[i]<<" ";
//timee
    return 0; 
} 


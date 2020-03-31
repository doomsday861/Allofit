	/**
 * FRIENDLESS DR.SHELDON HACKEREARTH
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
ll id[10005];
ll nodes,edges;
pair<ll,pair<ll,ll>>v[10004];
void init()
{
	for(ll i =0 ; i<10005;i++)
		id[i]=i;
}
ll root(ll x)
{
	while(id[x]!=x)
	{
		id[x]= id[id[x]];
		x = id[x];
	}
	return x;
}
void ux(ll x,ll y)
{
	ll a = root(x);
	ll b = root(y);
	id[a]= id[b];
}
ll kruskal()
{		ll minc=0;
	for(ll i =0;i<edges;i++)
	{
		ll x =v[i].second.first;
		ll y =v[i].second.second;
		ll c = v[i].first;
		if(root(x)!=root(y))
		{
			minc +=c;
			ux(x,y);
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
  cin>>nodes>>edges;
  for(ll i =0 ; i <edges;i++)
  {
  	ll x,y;
  	cin >> x>>y;
  	v[i]= make_pair(1,make_pair(x,y));
  }
  sort(v,v+edges);
	cout<<kruskal()<<endl;
}
//timee
    return 0; 
} 
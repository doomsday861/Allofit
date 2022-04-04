	/**
 * ORDERING TASK 10305
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
vector<ll> adj[10001];
bool vis[10001];
stack<ll> st;
ll m,n;
void init()
{
	memset(adj,0,sizeof(adj));
	memset(vis,0,sizeof(vis));
}
void toporec(ll s)
{
	vis[s]=true;
	for(ll i =0;i<adj[s].size();i++)
	{
		if(!vis[adj[s][i]])
			toporec(adj[s][i]);
	}
	st.push(s);
}
void topo()
{
	for(ll i =1  ;i<=m;i++)
	{
		if(!vis[i])
			toporec(i);
	}
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
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
 while(1)
 {
 	cin >>m >>n;
 	if(m+n==0)
 		break;
 	for(ll i =0 ;i<n;i++)
 	{
 		ll x,y;
 		cin >> x>>y;
 		adj[x].push_back(y);
 		//adj[y].push_back(x);
 	}
 	topo();
 	init();	
 }
//timee
    return 0; 
} 
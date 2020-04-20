	/**
 * MAKETREE SPOJ
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
vector<ll> adj[100001];
bool vis[100001];
ll pos[100001];
stack<ll> st;
ll n,k;
void init()
{
	memset(adj,0,sizeof(adj));
	memset(vis,0,sizeof(vis));
	memset(pos,0,sizeof(pos));
}
void toporec(ll s)
{
	vis[s]=true;
	for(ll i =0  ;i < adj[s].size();i++)
	{
		if(!vis[adj[s][i]])
			{
				toporec(adj[s][i]);
			}
	}
st.push(s);
}
void topo()
{
	for(ll i =1 ; i <=n;i++)
	{
		if(!vis[i])
			toporec(i);
	}
	ll prev =0;
	while(!st.empty())
	{
	//	cout<<st.top()<<" ";
		ll sexy = st.top();
		pos[sexy] = prev;
		prev = sexy;
		st.pop();
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
cin >> n >>k;
init();
for(ll i =1 ; i <=k; i++)
{
	ll x;
	cin >>x;
	for(ll j =0 ; j<x;j++)
	{
		ll z;
		cin >>z;
		adj[i].push_back(z);
	}
}
topo();
//cout<<endl;
for(ll i =1 ; i<=n;i++)
cout<<pos[i]<<endl;
//timee
    return 0; 
} 
	/**
 * MISTER NINE HACKEREARTH
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
vector<ll> adj[100001];
bool vis[1000001];
string st;
char ar[10001];
void fr[10001][26];
bool f=0;
ll counter=0;
ll x;
int findchar(char p, string st)
{
	int count =0;
	for(ll i =0 ; i < st.length();i++)
	{
		if(p==st[i])
			count++;
	}
	return count;
}
void dfs(ll s)
{	
	if(x==s && f)
	{
		return;
	}
		f= 1;
	vis[s]=true;
	cout<<ar[s]<<" ";
	ll c = findchar(ar[s],st);
	counter = st.length()-c-counter;
	for(ll i =0 ; i < adj[s].size();i++)
	{
		if(!vis[adj[s][i]])
			dfs(adj[s][i]);
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
ll n,q;
cin >> n >>q;
for(ll i=1;i <=n;i++)
{
	cin >> ar[i];
}
for(ll i=1;i <n;i++)
{
	ll a,b;
	cin >> a>>b;
	adj[a].push_back(b);
	adj[b].push_back(a);
}
for(ll i =0;i <q;i++)
{
cin >> x;
cin >> st;
dfs(x);
cout<< counter<<endl;
memset(vis,0,10001);
counter=0;
f=0;
}
//timee
    return 0; 
} 
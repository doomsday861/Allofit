	/**
 * 349 Knight Moves UVA
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
int ar[]= {1, -1, 1, -1, 2, 2, -2, -2};
int br[]= {2, 2, -2, -2, 1, -1, 1, -1};
bool vis[20][20];
int cost[20][20];
char c1[10],c2[10];
string s1;
string s2;
void init()
{
	memset(vis,0,sizeof(vis));
	//memset(cost,0,sizeof(cost));
}
bool val(ll x, ll y)
{
	return(x>0 && y>0 && x<=8 && y<=8);
}
void bfs(ll a, ll b, ll c, ll d)
{	
	queue<pair<ll,ll>> q;
	memset(vis,0,sizeof(vis));
	q.push(pair<ll,ll>(a,b));
	vis[a][b]=1;
	cost[a][b]=0;
	while(!q.empty())
	{
		pair<ll,ll> top = q.front();
		q.pop();
		if(top.first==c && top.second == d)
		{
			cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<cost[c][d]<<" knight moves.\n";
		}
		for(ll i=0 ; i < 8;i++)
		{
			ll x = top.first + ar[i];
			ll y = top.second + br[i];
			
			if(val(x,y) && !vis[x][y])
			{	
				cost[x][y] = cost[top.first][top.second]+1;
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
 while(cin>>s1 && cin>>s2)
 {	
 	init();
 	ll a = s1[0]-96;
 	ll b = s1[1]-'0';
 	ll c = s2[0]-96;
 	ll d = s2[1]-'0';
 	bfs(a,b,c,d);
 } 
  
//timee
    return 0; 
} 
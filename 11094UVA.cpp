/**
 * 11094UVA CONTINENTS
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
struct group
{
	ll x;
	ll y;
};
struct node
{
	group pt;
};
ll n,m;
char ar[21][21];
bool vis[21][21];
bool isval(ll x, ll y)
{
	if(x>=0 && x < n && y>=0 && y < m && ar[x][y] == 'L')
		return 1;	
		return 0;	
}
int row[] = {-1,0,0,1};
int col[] = {0,-1,1,0};
queue<node> q;
ll counter=0;
void connect(group cur)
{	
	if(cur.y < 0) 
		cur.y = m-1;
	if(cur.y >= m)
		cur.y = 0;
	if(!isval(cur.x,cur.y))
		return;
	if(vis[cur.x][cur.y])
		return;
	vis[cur.x][cur.y] = 1;
	counter++;
	for(ll i=0;i<4;i++)
	{
		group now = {cur.x + row[i], cur.y+col[i]};
		connect(now);
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
while(cin >>n>>m)
{

for(ll i=0;i < n;i++)
{
	for (ll j = 0; j < m; j++)
	{
		cin>>ar[i][j];
		vis[i][j]=0;
	}
}
ll x,y;
cin>>x>>y;
char t = ar[x][y];
for(ll i=0; i < n; i++)
{
	for(ll j=0; j < m; j++)
	{
		if(ar[i][j] == t)
			ar[i][j] = 'L';
		else
			ar[i][j] = 'W';
	}
}
group p = {x,y};
connect(p);
counter =0;
ll ans=0;
for(ll i=0;i < n; i++)
{
	for(ll j=0; j<m ;j++)
	{
		if(ar[i][j]=='L' && !vis[i][j])
		{
			group p = {i,j};
			connect(p);
	//		cout<<counter<<endl;
			ans = max(ans,counter);
			counter=0;
		}
	}
}
cout<<ans<<endl;
}
}
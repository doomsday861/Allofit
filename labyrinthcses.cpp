/**
 * 1193 LABYRINTH
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
char adj[10000][10000];
bool vis[10000][10000];
ll m,n;
ll row[] = {0,0,-1,1};
ll col[] = {-1,1,0,0};
ll dist=0;
vector<char> dirt;
struct cord
{
	ll x;
	ll y;
	ll dis;
	vector<char>dir;
};
struct point
{
	cord pt;
};
bool val(ll r, ll c)
	{
	return(r>=0 && r<n && c>=0 && c<m);
	}
bool valchar(ll r, ll c)
{
	if(adj[r][c] != '#' && vis[r][c] == false)
		return true;
	else
		return false;
}
char direction(ll x)
{
	if (x==0)
		return 'L';
	else if(x==1)
		return 'R';
	else if(x==2)
		return 'U';
	else
		return 'D';
}
bool bfs(cord pt)
{
	vis[pt.x][pt.y] =1;
	queue<cord> q;
	q.push(pt);
	while(!q.empty())
	{
		cord curr = q.front();
		q.pop();
		ll x = curr.x;
		ll y = curr.y;
		for(ll i=0 ; i<4;i++)
		{
			ll currow = curr.x + row[i];
			ll curcol = curr.y + col[i];
			vector<char>curdir = curr.dir;
			if(val(currow,curcol) && valchar(currow,curcol))
			{
				vis[currow][curcol] = 1;
				curdir.push_back(direction(i));
				if(adj[currow][curcol] =='B')
					{	
						for(ll x=0; x<curdir.size();x++)
								dirt.push_back(curdir[x]);
						dist = curr.dis+1;
						return true;
					}
				cord lol = {currow,curcol,curr.dis+1,curdir};
				//cout<<direction(i)<<endl;
				q.push(lol);
			}
		}
	}
	return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin >>n>>m;
ll ans =0;
for(ll i=0 ; i < n; i++)
{	
	for(ll j=0; j<m;j++)
	{
		cin>>adj[i][j];
		if(adj[i][j] == '#')
			vis[i][j] = 1;
		else
			vis[i][j] = 0;
	}
}
for(ll i=0; i <n;i++)
{
	for(ll j=0; j < m;j++)
	{
		if(adj[i][j]=='A' && vis[i][j] == false)
		{
			cord abhi = {i,j};
			if(bfs(abhi))
				{
					cout<<"YES"<<endl;
					cout<<dist<<endl;
					for(ll zoro =0; zoro<dirt.size();zoro++)
						cout<<dirt[zoro];
				}
			else
				cout<<"NO";
		}
	}
}
return 0;
}

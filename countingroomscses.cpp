/**
 * counting rooms cses
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
struct cord
{
	ll x;
	ll y;
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
	if(adj[r][c] == '.' && vis[r][c] == false)
		return true;
	else
		return false;
}
void bfs(cord pt)
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
			if(val(currow,curcol) && valchar(currow,curcol))
			{
				vis[currow][curcol] = 1;
				cord lol = {currow,curcol};
				q.push(lol);
			}
		}

	}
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
		if(adj[i][j] == '.')
			vis[i][j] = false;
		else
			vis[i][j] = true;
	}
}
for(ll i=0; i <n;i++)
{
	for(ll j=0; j < m;j++)
	{
		if(adj[i][j]=='.' && vis[i][j] == false)
		{

			ans++;
			cord abhi = {i,j};
			bfs(abhi);
		}
	}
}
cout<<ans<<endl;

}
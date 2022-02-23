/**
 * LABYRINTH
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
ll rx[4]={-1,0,1,0};
ll cx[4]={0,-1,0,1};
char path[4] = {'U','L','D','R'};
char grid[1005][1005];
vector<vector<pair<ll,ll>>>parent(1007);
string ans;
ll row,col;
bool isval(ll a, ll b)
{
	return(a>=1 && a<=row && b>=1 && b<=col && grid[a][b]!='#');
}
bool pathfinder(ll a1, ll b1)
{
	queue<pair<ll,ll>>q;
	q.push({a1,b1});
	grid[a1][b1] = 'A';
	parent[a1][b1] = {a1,b1};
	while(!q.empty())
	{
		pair<ll,ll> cord = q.front();
		q.pop();
		for0(i,4)
		{
			ll tempx = cord.fi+rx[i];
			ll tempy = cord.se+cx[i];
			if(isval(tempx,tempy))
			{
				if(grid[tempx][tempy]=='B')
				{
					parent[tempx][tempy] = {cord.fi,cord.se};
					ll a =tempx;
					ll b =tempy;
					ll c = parent[tempx][tempy].fi;
					ll d = parent[tempx][tempy].se;
					 while(a!=a1 or b!=b1)
					 {
					 	// cout<<a<<" "<<b<<" TO "<<c<<" "<<d<<" "<<a1<<" "<<b1<<endl;
						if(a-c==-1 && b-d == 0)
						{
							ans +="U";
						}
						else if(a-c==0 && b-d == 1)
						{
							ans+="R";
						}
						else if(a-c==1 && b-d == 0)
						{
							ans+="D";
						}
						else
						{
							ans+="L";
						}
					 	a = c;
					 	b = d;
						c = parent[a][b].fi;
					 	d = parent[a][b].se;
					 	// cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
					 }
					 // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
					 // cout<<parent[4][2].fi<<" haha "<<parent[4][2].se<<endl;
					return true;
				}
				else
				{
					q.push({tempx,tempy});
					parent[tempx][tempy] = {cord.fi,cord.se}; 
					grid[tempx][tempy] = '#';
				}
			}
		}
	}
	return false;
}
int main()
{
    run

    cin>>row>>col;
    parent.resize(row+1);
    ll idx,idy;
    for1(i,row)
    {
    	parent[i].resize(col+1);
    	for1(j,col)
    	{
    		cin>>grid[i][j];
    		if(grid[i][j]=='A')
    		{
    			idx = i;
    			idy = j;
    		}
    	}
    }
    // cout<<idx<<" "<<idy<<endl;
    if(pathfinder(idx,idy))
    { 
    	reverse(bend(ans));
    	cout<<"YES"<<endl<<ans.length()<<endl<<ans<<endl;
    }
    else
    	cout<<"NO"<<endl;
    // for1(i,row)
    // {
    // 	for1(j,col)
    // 	{
    // 		cout<<parent[i][j].fi<<" "<<parent[i][j].se<<",	";
    // 		// cout<<grid[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
   

    return 0;
}
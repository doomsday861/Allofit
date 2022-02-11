/**
 * countingrooms
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
char grid[1005][1005];
ll row,col;
bool isval(ll a, ll b)
{
	return(a>=1 && a<=row && b>=1 && b<=col && grid[a][b]!='#');
}
void searcher(ll a, ll b)
{
	queue<pair<ll,ll>> q;
	q.push({a,b});
	grid[a][b] = '#';
	while(!q.empty())
	{
		pair<ll,ll> cord = q.front();
		q.pop();
		for0(i,4)
		{
			ll tempx = cord.fi + rx[i];
			ll tempy = cord.se + cx[i];
			if(isval(tempx,tempy))
			{
				q.push({tempx,tempy});
				grid[tempx][tempy] = '#';
			}
		}
	}
	return;
}
int main()
{
    run
    cin>>row>>col;
    for1(i,row)
    {
    	for1(j,col)
    	{
    		cin>>grid[i][j];
    	}
    }

 ll ans=0;
    for1(i,row)
    {
    	for1(j,col)
    	{
    		if(grid[i][j]=='.')
    		{
    			searcher(i,j);
    			ans++;
    		}
    	}
    }
   cout<<ans;

    return 0;
}
/**
 * 445A
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
using namespace std;
ll r,c;
ll lr[] ={1,-1,0,0};
ll lc[] ={0,0,1,-1};
char ar[100][100];
bool isval(ll i,ll j)
{
	return(i>=0 && i<r && j>=0 && j<c);
}
ll checkround(ll a,ll b)
{
	bool bl=0,w=0;
	for0(i,4)
	{
			ll x = a+lr[i];
			ll y = b+lc[i];
			if(isval(x,y))
			{
				// if(a==2 && b==2)
				// 	cout<<x<<" "<<y<<endl;
				if(ar[x][y]=='W')
					w=1;
				if(ar[x][y]=='B')
					bl=1;
			}
	}
	 // if(a==2 && b==2)
	 // 	cout<<bl<<" "<<w<<endl;
	if(bl && w)
		return -1;
	if(bl)
		return 2;
	if(w)
		return 1;
	if(!bl && !w)
		return 1;

}

int main()
{
    run

cin>>r>>c;
for0(i,r)
{
	for0(j,c)
	{
		cin>>ar[i][j];
	}
}
for0(i,r)
{
	for0(j,c)
	{
		if(ar[i][j]=='.')
		{
			if((i+j)&1) ar[i][j] = 'B';
			else
				ar[i][j] = 'W';
		}
	}
}
for0(i,r)
{
	for0(j,c)
	{
		cout<<ar[i][j];
	}
	cout<<endl;
}


    return 0;
}
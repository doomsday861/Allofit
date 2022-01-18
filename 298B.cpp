/**
 * 298B
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
int main()
{
    run

ll t,x,y,a,b;
cin>>t>>x>>y>>a>>b;
vector<char> v(t);
for0(i,t) cin>>v[i];
ll ans=0;
for(auto c: v)
{
	if(c=='S')
	{
		if(y>b)
		y--;
	}
		if(c=='N')
	{
		if(b>y)
		{
			y++;
		}
	}
	if(c=='E')
	{
		if(a>x)
			x++;
	}
	if(c=='W')
	{
		if(x>a)
		{
			x--;
		}
	}
	ans++;
	if(x==a && y==b)
		break;
}
if(x==a && y==b)
cout<<ans;
else
cout<<-1;
   

    return 0;
}
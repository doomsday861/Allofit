/**
 * cycle finding
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
#define INF 9e17
#define NINF INF*(-1)
using namespace std;
ll n,m;
vll p;
vll d;
struct edge
{
	int a,b,c;
};
vector<edge>e;
void solve()
{
	ll x;
	for1(i,n)
	{
		x = -1;
		for(auto ed:e)
		{
			if(d[ed.b] > d[ed.a]+ed.c)
			{
				d[ed.b] = d[ed.a]+ed.c;
				p[ed.b] = ed.a;
				x = ed.b;
			}
		}
	}

		vll path;
	if(x==-1)
	{
		cout<<"NO";
		return ;
	}
	else
	{		
		cout<<"YES"<<endl;

		//ll y = x;
		for1(i,n)
		{
			x= p[x];
		}
		for(ll cur =x;;cur=p[cur])
		{
			path.pb(cur);
			if(cur==x && path.size()>1)
			{
				break;
			}
		}
		reverse(bend(path));
	}
	for(auto x:path)
		cout<<x<<" ";
}
int main()
{
    run
    cin>>n>>m;
     e.resize(m);
     d.resize(n+1);
     p.resize(n+1);
    for0(i,m)
    {
    	ll a,b,c;
    	cin>>a>>b>>c;
    	edge x;
    	x.a = a;
    	x.b = b;
    	x.c =c;
    	e[i]=x;
    }
    for1(i,n)
    {
    	p[i] = -1;
    }
    solve();

  
   

    return 0;
}
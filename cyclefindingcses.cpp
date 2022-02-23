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
struct edge
{
	int a,b,c;
};
vector<edge>e;
void solve(ll v)
{
	vll d(n+1,INF);
	d[v] = 0;
	vll p(n+1);
	ll x;
	for1(i,n)
	{
		x = -1;
		for1(j,n)
		{
			if(d[e[j].a]<INF)
			{
				if(d[e[j].b] > d[e[j].a]+e[j].c)
				{
					d[e[j].b] = max(-900000000000000000,d[e[j].a]+e[j].c);
					p[e[j].b] = p[e[j].a];
					x = e[j].b;
				}
			}
		}
	}
	if(x==-1)
	{
		cout<<"NO";
		return ;
	}
	else
	{
		cout<<"YES";
	}
}
int main()
{
    run
    cin>>n>>m;
    // e.resize(n+1);
    while(m--)
    {
    	ll a,b,c;
    	cin>>a>>b>>c;
    	edge x;
    	x.a = a;
    	x.b = b;
    	x.c =c;
    	e.pb(x);
    }
    solve(1);

  
   

    return 0;
}
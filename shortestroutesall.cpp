/**
 * shortest route
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
ll d[1004][1004];
ll n,m,q;
void init()
{
	for1(i,n)
	{
		for1(j,n)
		{
			d[i][j] = 1e15;
			if(i==j)
				d[i][j] = 0;
		}
	}
}
int main()
{
    run
    cin>>n>>m>>q;
    init();
    for0(i,m)
    {
    	ll a,b,c;
    	cin>>a>>b>>c;
    	d[a][b] = min(d[a][b],c);
    	d[b][a] = min(d[a][b],c);
    }
    for(ll k = 1; k<=n;k++)
    {
    	for1(i,n)
    	{
    		for1(j,n)
    		{
    			d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
    		}
    	}
    }
    while(q--)
    {
    	ll a,b;
    	cin>>a>>b;
    	if(d[a][b]==1e15)
    		cout<<-1<<endl;
    	else
    	cout<<d[a][b]<<endl;
    }
    
   

    return 0;
}
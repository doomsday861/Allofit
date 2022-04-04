/**
 * candles amazon
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
ll countones(vll v, ll l, ll r,vll lit)
{
	int cnt=0;
	for(ll i=l;i<r;i++)
	{
		if(lit[i]==1)
		{
			cnt++;
		}
	}
	return cnt;
}
ll burones(vll v, ll l, ll r,vll &lit,ll count,ll c)
{
	ll ans = count;
	int x =0;
	for(int i =r-1;i>=l;i--)
	{
		if(lit[i]==0 && count<c)
		{
			lit[i]=1;
			count++;
			x++;
		}
	}
	return x;

}
int main()
{
    run

    ll n;
    cin>>n;
    vll v(n);
    vll lit(505,0);
    for0(i,n)
    cin>>v[i];
    sort(bend(v));
    ll t,c;
    cin>>t>>c;

    if(v[0]<c)
    {
    	cout<<-1<<endl;
    	return 0;
    }
    int ans = c;
    int y=0;
    for(int i=0;i<n;i++)
    {
    	int x = countones(v,v[i]-t+1,v[i],lit);
    	if(x>=c)
    		continue;
    	else
    	{
    		 y = burones(v,v[i]-t+1,v[i],lit,x,c);
    	}
    	int finally = countones(v,v[i]-t+1,v[i],lit);
    	if(finally < c
    		)
    	{
    		cout<<-1<<endl;
    		return 0;
    	}
    	ans = max(ans,y);
    }
    int rans = countones(v,1,500,lit)+y;
    cout<<rans<<endl;
    //cout<<ans<<endl;


    return 0;
}
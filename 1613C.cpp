/**
 * 1613C
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
ll ar[10001];
ll n;
ll find(ll k)
{
	ll total =0;
	for0(i,n-1)
	{
		total +=min(k,ar[i+1]-ar[i]);
	}
	total +=k;
	return total;
}
int main()
{
    run

    
 testcase
  {
  	ll h;
  	cin>>n>>h;
  	for0(i,n+1)ar[i]=0;
  	for0(i,n) cin>>ar[i];
  	ll l =1;
  	ll r = LLONG_MAX;
  	ll ans=0;
  	//cout<<find(7)<<endl;
  	while(l<=r)
  	{
  		ll m = l+(r-l)/2;
  		if(find(m)==h)
  		{
  			ans = m;
  			break;
  		}
  		else if(find(m)<h)
  		{
  			l = m+1;
  		}
  		else
  		{
  			r = m-1;
  			ans = m;
  		}
  	}
  	cout<<ans<<endl ;
}
   

    return 0;
}
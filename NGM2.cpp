/**
 * NGM2 SPOJ
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll lcm(ll a, ll b)
{
	return ((a*b)/__gcd(a,b));
}
ll counter(ll a,ll b, ll m)
{
	if(a%m==0)
		return b/m - a/m +1;
	return b/m - a/m;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
ll k;
cin>>k;
vector<ll> v(k);
for(ll i=0; i < k;i++) cin>>v[i];
ll ans =0;
for(ll i=1;i<(1<<k);i++)
{	
	ll div = 1;
	for(ll j=0; j < k;j++)
	{
		if(i & (1<<j))
			div = lcm(div,v[j]);
	}
	if(__builtin_popcount(i) & 1)
		ans += counter(1,n,div);
	else
		ans -= counter(1,n,div);
//	cout<<ans<<endl;
}
cout<<n-ans<<endl;
return 0;
}
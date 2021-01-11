/**
 * UVA 10325 Lottery
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll lcm(ll a, ll b)
{
	return ((a*b)/__gcd(a,b));
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
while(cin>>n)
{
	ll m;
	ll ans=0;
	cin>>m;
	vector<ll> v(m);
	for(ll i=0;i<m;i++) cin>>v[i];
	// 10 - (2/10 + 3/10 -(2 and 3)/10)
	for(ll i = 1; i<(1<<m);i++) 		
	{	
		ll denom =1;
		for(ll j=0;j<m;j++)
		{
			if(i&(1<<j)) 
			{
				denom =  lcm(denom,v[j]);
			}
		}
			ll cnt = __builtin_popcount(i);
			if(cnt&1)
			{
				ans += n/denom;
			}
			if(cnt&1 ^ 1)
			{
				ans -= n/denom;
			}
	//	cout<<ans<<endl;
	}
	cout<<n-ans<<endl;
}

}
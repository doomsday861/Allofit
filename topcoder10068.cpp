/**
 * topcoder 10068 divisbility
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll counter(ll a,ll b, ll d)
{
	if(a%d==0)
		return (b/d - a/d + 1);
	return (b/d - a/d);
}
ll lcm(ll a, ll b)
{
	return (a*b)/__gcd(a,b);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll l,r;
cin >>l>>r;
vector<ll> a;
ll x;
bool all=0;
while(cin>>x)
	{
		a.push_back(x);
		if(x==1)
			all =1;
	}
if(all)
{
	cout<<r-l+1<<endl;
	return 0;
}
ll ans =0;
for(ll i=1;i<(a.size()<<1);i++)
{
	ll m = 1;
	for(ll j =0; j < a.size();j++)
	{
		if(i & 1<<j )
			m = lcm(m,a[j]);
	}
	if(__builtin_popcount(i)&1)
		ans -= counter(l,r,m);
	else
		ans+= counter(l,r,m);
}
cout<<ans*-1<<endl;
    return 0;
}
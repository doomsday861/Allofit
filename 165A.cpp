/**
 * 165A
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
vector<pair<ll,ll>> v;
ll n;
cin>>n;
for0(i,n)
{
	ll a,b;
	cin>>a>>b;
	v.pb({a,b});
}
ll ans=0;
for0(i,n)
	{
		bool l=0,r=0,u=0,d=0;
		ll a =v[i].first;
		ll b = v[i].second;
		for0(j,n)
		{
			if(v[j].first > a && v[j].second == b)
				r=1;
			if(v[j].first < a && v[j].second == b)
				l=1;
			if(v[j].first == a && v[j].se > b)
				d=1;
			if(v[j].first == a && v[j].se < b)
				u=1;
		}
		if(l && r && u && d)
		{
			ans++;
		}
   }
cout<<ans;
    return 0;
}
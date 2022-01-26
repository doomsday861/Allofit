/**
 * 315A
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

set<ll> st;
ll n;
cin>>n;
vector<pair<ll,ll>> v(n);
for0(i,n){
 cin>>v[i].fi>>v[i].se;
}
ll ans=0;
for0(i,n)
{
	bool f=0;
	for0(j,n)
	{
		if(i==j)
			continue;
		if(v[i].fi == v[j].se)
		{
			f=1;
			break;
		}
	}
	if(f)
		ans++;
}
cout<<n-ans;
    return 0;
}
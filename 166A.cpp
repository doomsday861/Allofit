/**
 * 166A
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
bool sorter(pair<ll,ll> a,pair<ll,ll> b)
{
	if(a.first>b.first)
		return true;
	if(a.first==b.first)
	{
		return(b.se > a.se);
	}
	return false;
}

int main()
{
    run
ll n,k;
cin>>n>>k;
vector<pair<ll,ll>> v(n);
for(ll i=0; i <n;i++)
{
	ll a,b;
	cin>>a>>b;
	v[i].fi = a;
	v[i].se = b;
}
  sort(v.begin(),v.end(),sorter);
  for(auto x:v)
  	cout<<x.fi<<" "<<x.se<<endl;

ll pos = k-1;
ll l = v[pos].fi;
ll r = v[pos].se;
ll c = 0;
//cout<<l<<" "<<r<<endl;
for(auto x:v)
{
	if(x.fi == l && x.se == r)
		c++;
}
cout<<c;
    return 0;
}
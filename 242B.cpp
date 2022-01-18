/**
 * 242B
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
bool sorter(pair<pair<ll,ll>,ll> &a, pair<pair<ll,ll>,ll> &b)
{
	if(a.fi.fi < b.fi.fi)
		return true;
	if(a.fi.fi == b.fi.fi)
	{
		if(b.fi.se < a.fi.se)
			return true;
		else
			return false;
	}
	return false;
}
int main()
{
    run

ll l =0;
ll r =0;
ll n;
cin>>n;
ll diff=0;
vector<pair<pair<ll,ll>,ll>>v(n);
for0(i,n)
{
	ll a,b;
	cin>>a>>b;
	v[i] = {{a,b},i+1};
}
sort(v.begin(),v.end(),sorter);
// for(auto x: v)
// 	cout<<x.fi.fi<<" "<<x.fi.se<<endl;
l = v[0].fi.fi;
r = v[0].fi.se;
ll id = v[0].se;
bool f=0;
for0(i,n)
{
	if(l<=v[i].fi.fi && r>=v[i].fi.se)
		continue;
	else
		f=1;
}
//cout<<l<<" "<<r<<endl;
if(f)
	cout<<-1<<endl;
else
	cout<<id;
    return 0;
}
/**
 * 248A
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

ll n;
cin>>n;
ll l=0,r=0;
for0(i,n)
{
	ll a,b;
	cin>>a>>b;
	l +=a; r+=b;
}
ll ans=0;
if(l>ceil(n/2))
{
	ans+=(n-l);
}
if(l<=(n/2))
{
	ans+=l;
}
if(r>ceil(n/2))
{
	ans+=(n-r);
}
if(r<=(n/2))
{
	ans+=r;
}
cout<<ans;
}
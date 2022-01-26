/**
 * 199A
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
vector<ll>v;
void fib()
{
	ll x = 0;
	ll y = 1;
	v.pb(x);
	v.pb(y);
	ll z = x+y;
	v.pb(z);
	x = y;
	y = z;
	while(z<=1000000003)
	{
		z = x+y;
		v.pb(z);
		x = y;
		y = z;
	}
}
int main()
{
    run

 ll n;
 cin>>n;
 if(n==0)
 {
 	cout<<0<<" "<<0<<" "<<0;
 	return 0;
 }
 if(n==1)
 {
 	cout<<1<<" "<<0<<" "<<0;
 	return 0;
 }
 fib();
ll id =0;
while(v[id]!=n)
id++;

cout<<v[id-1]<<" "<<v[id-2]<<" "<<0;

    return 0;
}
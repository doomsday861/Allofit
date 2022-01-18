/**
 * 80A
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool isprime(ll n)
{
	for(ll i=2; i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
ll nextprime(ll n)
{
	for(ll i=n+1;i<=100;i++)
	{
		
		if(isprime(i))
			return i;
	}
	return 100;
}
int main()
{
	ll a,b;
	cin>>a>>b;
	if (b== nextprime(a))
		cout<<"YES";
	else
		cout<<"NO";
}
/**
 * TOWERTOP
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
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
ll nextpowerof2(ll n)
{
    ll p = 1;
    if (n && !(n & (n - 1)))
        return n;
 
    while (p < n)
        p <<= 1;
     
    return p;
}
ll findone(ll x, ll m)
{
	ll counter=1;
	ll a=1;
	while(a<x)
	{
		a = 2*a;
		counter++;
	}
	return counter;
}
int main()
{
    run

    
 testcase
  {
  	ll x,m;
  	cin>>x>>m;
  	ll oneb = findone(x,m);
//  	cout<<oneb<<" "<<m<<" ";
  	if(oneb > m)
  	{
  		cout<<0<<endl;
  		continue;
  	}
  	ll ans = m-oneb+1;
  	cout<<ans<<endl;
}
   

    return 0;
}
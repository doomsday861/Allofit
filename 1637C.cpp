/**
 * 1637C
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
int main()
{
    run

    
 testcase
  {
  	ll n;
  	cin>>n;
  	vll v(n);
  	bool f=0;
  	bool ec=0;
  	ec=0;
  	for0(i,n)
  	cin>>v[i];
  	for1(i,n-2)
  	{
  		if(v[i]>1)
  			f=1;
  		if(v[i]&1^1)
  		{
  			ec=1;
  		}
  	}
  	if(!f || (!ec && n==3))
  	cout<<"-1"<<endl;
  	else
  	{
  		ll ans=0;
  		for1(i,n-2)
  		{
  			ans +=(v[i]+1)/2;
  		}
  		cout<<ans<<endl;
  	}

}
   

    return 0;
}
/**
 * 1620B
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
  	ll w,h;
  	cin>>w>>h;
  	vector<vll> v(4);
  	for0(i,4)
  	{
  		ll k;
  		cin>>k;
  		v[i].resize(k);
  		for0(j,k)
  		{
  			cin>>v[i][j];
  		}
  	}
  	ll ans=0;
  	for0(i,4)
  	{
  		ll x =0;
  		if(i<=1)
  			x = h;
  		else
  			x =w;
  		ans = max(ans,(v[i][v[i].size()-1]-v[i][0])*x);
  	}
  	cout<<ans;
  	cout<<endl;
}
   

    return 0;
}
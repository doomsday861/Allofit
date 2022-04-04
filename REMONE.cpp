/**
 * REMONE
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
  	for0(i,n)cin>>v[i];
  	vll diff(n-1);
  	for0(i,n-1)cin>>diff[i];
  	sort(bend(v));
  	sort(bend(diff));
  	if(n==2)
  	{
  		ll ans = min(diff[0]-v[0],diff[0]-v[1]);
  		if(diff[0]-v[1]<1)
  		{
  			cout<<diff[0]-v[0]<<endl;
  			continue;
  		}
  		cout<<ans<<endl;
  		continue;
  	}
  	map<ll,ll> mp;
  	ll curdiff =INT_MAX;
  	for(int i=0;i<3;i++)
  	{
  		for(int j=0;j<n-1;j++)
  		{
  			mp[diff[j]-v[i]]++;
  		}
  	}
  	for(auto x:mp)
  	{
  		if(x.fi <=0)
  			continue;
  		if(x.se >1)
  		{
  			curdiff = min(curdiff,x.fi);
  		}
  	}

  	cout<<curdiff<<endl;
}
   

    return 0;
}
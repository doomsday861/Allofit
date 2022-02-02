/**
 * 1541B retry
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
  	vll v(n+1);
  	for1(i,n) cin>>v[i];

  	ll ans=0;
  	for1(i,n)
  	{
  		for(ll j=v[i]-i; j<=n;j+=v[i])
  		{
  			if(j>=0)
  			{
  				//cout<<j<<" ";
  				if(v[i]*v[j] == i+j && i<j)
  					ans++;
  		}
  	}
}
  	cout<<ans<< endl;
}
   

    return 0;
}
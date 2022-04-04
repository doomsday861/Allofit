/**
 * 1369C
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
  	ll n,k;
  	cin>>n>>k;
  	vll v(n);
  	vll w(k);
  	for0(i,n) cin>>v[i];
  	sort(bend(v),greater<ll>());
  	for0(i,k) cin>>w[i];
  	sort(bend(w));
  	ll ans=0;
  	ll l=0;
  	ll i=0;
  	for0(i,k)
  	{
  		if(w[i]==1)
  		{
  			ans+=v[i]*2;
  		}
  		else
  			ans+=v[i];
  	}
  	ll c=k;
  	for0(i,k)
  	{
//  		cout<<ans<<endl;
  		if(w[i]==1)
  			{
  				continue;
  			}
  		else
  		{
  			ans +=v[c+w[i]-2];
  			c = w[i]-1 + c;
  		}
  	}
  	cout<<ans<<endl;

}
   

    return 0;
}
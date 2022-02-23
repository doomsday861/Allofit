/**
 * 1637B1
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
  	ll ans=0;
  	for0(i,n) cin>>v[i];
  	for1(k,n)
  	{
  		ll x = k-1;
  		for(ll i=0;x<n;x++,i++)
  		{
  			ll tempcount=0;
  			for(ll j=i;j<=x;j++)
  			{
  				if(v[j]==0)
  					tempcount++;
  			}
  			ans +=k;
  			ans+=tempcount;
  		}
  	}
  	cout<<ans<<endl;

}
   

    return 0;
}
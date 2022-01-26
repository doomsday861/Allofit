/**
 * 339B
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
    run

  ll n,m;
  cin>>n>>m;
  vll v(m);
  for0(i,m) cin>>v[i];
  ll a=1;
  ll ans=0;
  for0(i,m)
  {
  	if(v[i]>=a)
  		{
  			ans += v[i]-a;
  		}
  	else
  	{
  		ans += n - (a-v[i]);
  	}
  	  	//cout<<ans<<" "<<a<<"to "<<v[i]<<endl;
  	a = v[i];
  }
  cout<<ans;
   

    return 0;
}
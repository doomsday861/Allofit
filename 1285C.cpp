/**
 * 1285C
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
ll lcm(ll a, ll b)
{
	return (a*b)/__gcd(a,b);
}
int main()
{
    run

  ll n;
  cin>>n;
  ll ans=1;
  for(ll i=1;i*i<=n;i++)
  {
  	if(n%i==0)
  	{
  		if(lcm(i,n/i)==n)
  		{
  			ans = i;
  		}
  	}
  }
  cout<<ans<<" "<<n/ans<<endl;
   

    return 0;
}

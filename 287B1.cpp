/**
 * 287B1.cpp
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

  ll n,k;
  cin>>n>>k;
  ll ans = -1;
  ll l = 0;
  ll r = k-1;
  while(l<=r)
  {
  	ll mid = (l+r)/2;
  	ll sum = mid*(2*k-mid-1)/2;
  	if(n-1<=sum)
  	{
  		ans = mid;
  		r = mid-1;
  	}
  	else
  		l = mid+1;
  }
	cout<<ans;
   

    return 0;
}
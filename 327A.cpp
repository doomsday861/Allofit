/**
 * 327A
 * kadane ?
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

  ll n;
  cin>>n;
  ll dp[n+1];
  vll v(n);
  vll v1(n);
  ll oc=0;
  for0(i,n)
  {
  	cin>>v[i];
  	if(v[i])
  		{
  			oc++;
  			v1[i]=-1;
  		}
  	else
  		v1[i] = 1;
  }
dp[0] = v1[0];
ll maxele=dp[0];
  for1(i,n-1)
  {
  	dp[i] = max(dp[i-1]+v1[i],v1[i]);
  	maxele = max(dp[i],maxele);
  }
// for0(i,n)
// cout<<dp[i]<<" ";

cout<<maxele+oc;


    return 0;
}
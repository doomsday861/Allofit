/**
 * 1420C1
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
  	ll n,q;
  	cin>>n>>q;
  	vll v(n);
  	for0(i,n) cin>>v[i];
  	ll dp1[n+3];
  	ll dp2[n+3];
  	dp1[0] = INT_MIN;
  	dp2[0] = 0;
  	for0(i,n)
  	{
  		dp1[i+1] = max(dp1[i],dp2[i]+v[i]);
  		dp2[i+1] = max(dp2[i],dp1[i]-v[i]);
  	}
  	cout<<max(dp1[n],dp2[n])<<endl;

}
   

    return 0;
}
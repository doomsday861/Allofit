/**
 * 265B
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
using namespace std;
int main()
{
    run

   ll n;
   cin>>n;
   vll v(n);
   ll curh=0;
   ll ans=0;
  for0(i,n)
  {
  	cin>>v[i];
  }
  for0(i,n)
  {
  	ll a = abs(v[i]-curh);
  	curh = v[i];
  	a++;
  	ans +=a;
  	ans++;
  	//cout<<curh<<" ";
  }
  ans--; 
cout<<ans;
    return 0;
}
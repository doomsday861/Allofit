/**
 * 289B
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

  ll n,m,k;
  cin>>n>>m>>k;
  vll v(n*m);
  bool f=0;
  for0(i,n*m) cin>>v[i];
  ll mol = v[0]%k;
  for0(i,n*m)
  {
  	if(v[i]%k!=mol)
  		f=1;
  } 
   if(f)
   {
   	cout<<-1<<endl;
   	return 0;
   }
   sort(v.begin(),v.end());
   ll fd=0;
   ll sd=0;
   if((n*m)%2==0)
   {
   	fd = (n*m)/2;
   	sd = fd-1;
   }
   if((n*m)&1)
   {
   	fd = (n*m)/2;
   }
   ll ans=0;
   ll ans1=0;
   // for(auto x: v)
   // 	cout<<x<<" ";
   for0(i,n*m)
   {
   		ans +=abs(v[i]-v[fd])/k;
   		ans1 +=abs(v[i]-v[sd])/k;
   		// cout<<(v[i]-v[fd])<<endl;
   }
   if(!((n*m)&1))
   {
   	cout<<min(ans,ans1);
   }
   else
   	cout<<ans;
    return 0;
}
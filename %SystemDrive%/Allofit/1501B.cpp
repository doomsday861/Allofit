/**
 * 1501B
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
  	for0(i,n) cin>>v[i];
  	ll cnt =0;
  	vll ans(n,0);
  	for(ll i = n-1;i>=0;i--)
  	{
  		cnt = max(cnt,v[i]);
  		if(cnt==0)
  		{
  			ans[i]=0;
  		}
  		else
  		{
  			ans[i] = 1;
  			cnt--;
  		}
  	}
  	for(auto x:ans)
  		cout<<x<<" ";
  	cout<<endl;
}
   

    return 0;
}
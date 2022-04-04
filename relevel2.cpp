/**
 * relevel2
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
  	for0(i,n)
  	cin>>v[i];
  	ll curmax=v[0];
  	ll maxd =0;
  	for0(i,n)
  	{
  		curmax = max(curmax,v[i]);
  		maxd = max(maxd,curmax-v[i]);
  		v[i] = curmax;
  	}
  	//   	for(auto x:v)
  	// {
  	// 	cout<<x<<" ";
  	// }
  	// cout<<endl;
  	ll ans=0;
  	if(maxd==0)
  	{
  		cout<<0<<endl;
  		continue;
  	}
  	for(int i=1;i<=33;i++)
  	{
  		if(maxd<=pow(2,i)-1)
  		{
  			ans = i;
  			break;
  		}
  	}
  	cout<<ans<<endl;
}
   

    return 0;
}
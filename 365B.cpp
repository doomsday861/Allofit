/**
 * 365B
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
    for0(i,n)
    cin>>v[i];
    if(n==1)
    {
    	cout<<1;
    	return 0;
    }
    if(n==2)
    {
    	cout<<2;
    	return 0;
    }
   	vll pre(n);
   	ll i=0;
   	ll c=2;
   	ll ans=0;
   	while(i<n-2)
   	{
   		if(v[i+2]==v[i]+v[i+1])
   		{
   			c++;
   			i++;
   		}
   		else
   		{
   			ans = max(ans,c);
   			c=2;
   			i++;
   		}
   	}
   	ans = max(ans,c);
cout<<ans;
    return 0;
}
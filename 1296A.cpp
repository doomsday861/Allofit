/**
 * 1296A
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
  	ll oc=0;
  	ll ec=0;
  	for0(i,n)
  	{
  		cin>>v[i];
  		if(v[i]&1)
  			oc++;
  		else
  			ec++;
  	}
  	bool f=0;
  	if(oc==0)
  	{
  		f=1;
  	}
  	else if(n&1^1)
  	{
  		if(ec==0)
  			f=1;
  	}
  	if(f)
  	{
  		cout<<"NO"<<endl;
  	}
  	if(!f)
  	{
  		cout<<"YES"<<endl;
  	}
}
   

    return 0;
}
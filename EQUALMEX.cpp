/**
 * EQUALMEX
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
ll findmex(vll v)
{
	ll mini =0;
	for(ll i=0; i<v.size();i++)
	{
		if(v[i]==mini)
		{
			mini++;
		}
	}
	return mini;
}
int main()
{
    run

    
 testcase
  {
  	ll n;
  	cin>>n;
  	vll v(2*n);
  	for0(i,2*n)
  	cin>>v[i];
  	sort(bend(v));
  	vll a(n);
  	vll b(n);
  	ll ac =n-1;
  	ll bc =n-1;
  	for(ll i = v.size()-1;i>=0;i--)
  	{
  		if(i&1)
  		{
  			a[ac] = v[i];
  			ac--;
  		}
  		else
  		{
  			b[bc] = v[i];
  			bc--;
  		}
  	}
  	if(findmex(a)==findmex(b))
  	{
  		cout<<"YES"<<endl;
  	}
  	else
  		cout<<"NO"<<endl;
}
   

    return 0;
}
/**
 * mxmtrio
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	ll n;
  	cin>>n;
  	vector<ll> v(n);
  	for(ll i=0; i < n;i++)
  		cin>>v[i];
  	sort(v.begin(),v.end());
  	//cout<<v[n-1]<<" "<<v[0]<<" "<<v[n-2]<<endl;
  	ll x = (v[n-1]-v[0]);
  	ll ans = x*v[n-2];
  	cout<<ans<<endl;
}
    return 0;
}
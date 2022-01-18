/**
 * MEDMIN 
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
  	for(ll i=0; i < n;i++) cin>>v[i];
  		sort(v.begin(),v.end());
  	ll x = v[(n/2)-1];
  	ll y = v[(n/2)];
  	cout<<y-x;
  	cout<<endl;
}
    return 0;
}
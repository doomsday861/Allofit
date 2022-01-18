/**
 * 1625B
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

 testcase
  {
  	ll n;
  	cin>>n;
  	vll v(n);
  	map<ll,vector<int>>mp;
  	set<ll> st;
  	mp.clear();
  	bool f=0;
  	st.clear();
  	ll ans=0;
  	for0(i,n){
		cin>>v[i];
		mp[v[i]].push_back(i);
}
//cout<<mp.size();
for(auto x:mp)
{
	for(ll i=0; i< x.second.size()-1;i++)
	{
		ans = max(ans,x.second[i]+(n-x.second[i+1]));
	}
}
if(ans==0)ans--;
cout<<ans<<endl;
}
    return 0;
}
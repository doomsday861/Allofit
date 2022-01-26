/**
 * 462B
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

 ll n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 //vector<pair<ll,ll>> v(n);
 vector<ll>v(27,0);
 for(auto x:s)
 	v[x-'A']++;
   
 sort(v.begin(),v.end(),greater<ll>());
 ll ans=0;
 ll picked =0;
for0(i,v.size())
{
	ll tempc=0;
	while(v[i] && picked<k)
	{
		tempc++;
		v[i]--;
		picked++;
	}
	//cout<<tempc<<" "<<picked<<endl;
	ans += tempc*tempc;
}
cout<<ans;

    return 0;
}
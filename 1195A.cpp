/**
 * 1195A
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

   ll n,k;
   cin>>n>>k;
   vll v(n);
   map<ll,ll>mp;
   for0(i,n){
    cin>>v[i];
    mp[v[i]]++;
}
ll limit= ceil(n*1.0/2);
ll settaken =0;
ll ans=0;
ll good=0;
ll bad=0;
for(auto x:mp)
{
	if(x.se&1)
		bad++;
	ans +=x.se/2*2;
	// cout<<ans<<endl;
}
// cout<<bad<<endl;
ans +=(bad+1)/2;
cout<<ans<<endl;

    return 0;
}
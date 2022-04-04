/**
 * 373C
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

    
ll n;
cin>>n;
vll v(n+1);
for1(i,n) cin>>v[i];
sort(v.begin()+1,v.end());
ll ans = n;
ll r = n;
for(ll l=n/2;l>0;l--)
{
	if(v[r]>=(2*v[l]))
	{
		ans--;
		r--;
	}
}
// cout<<r<<" "<<ans<<endl;
cout<<ans<<endl;
    return 0;
}
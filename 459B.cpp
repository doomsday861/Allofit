/**
 * 459B
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
ll n;
cin>>n; vll v(n);
map<ll,ll> mp;
for0(i,n)
{
	cin>>v[i];
	mp[v[i]]++;
}
sort(v.begin(),v.end());
ll ans1 = v[n-1] - v[0];
ll ans2 = mp[v[n-1]] * mp[v[0]];
if(mp.size()==1)
	ans2 = (n*(n-1))/2;
cout<<ans1<<" "<<ans2;

    return 0;
}
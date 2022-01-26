/**
 * 34B
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
vll v(n);
for0(i,n) cin>>v[i];

sort(v.begin(),v.end());
ll ans=0;
for0(i,k)
{
	if(v[i]<0)
		ans += v[i]*-1;
} 
cout<<ans;
    return 0;
}
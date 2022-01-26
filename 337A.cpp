/**
 * 337A
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
    ll k,n;
    cin>>k>>n;
    vll v(n);
    for0(i,n) cin>>v[i];
    ll l=0;
    ll r = k-1;
    sort(v.begin(),v.end());
    ll ans=INT_MAX;
    while(r!=n)
    {
    	ans = min(v[r]-v[l],ans);
    	r++; l++;
    }
   cout<<ans;

    return 0;
}
/**
 * 467B
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
using namespace std;
int main()
{
    run

    ll n,m,k;
    cin>>n>>m>>k;
    vll v(m);
    for0(i,m)
    {	
    	cin>>v[i];
    }
    ll x;
    cin>>x;
    ll ans=0;
    for0(i,m)
    {
    	if(__builtin_popcount(x^v[i]) <=k)
    		ans++;
    }
   cout<<ans;

    return 0;
}
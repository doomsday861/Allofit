/**
 * 1117B
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

    ll n,m,k;
    cin>>n>>m>>k;
    vll v(n);
    for0(i,n)
    {
    	cin>>v[i];
    }
   	sort(bend(v),greater<ll>());
   	ll a = m -(m/(k+1));
   	ll b = m-a;
   //	cout<<a<<" "<<b<<endl;
   	ll ans = v[0]*a + v[1]*b;
   	cout<<ans<<endl;
    return 0;
}
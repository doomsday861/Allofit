/**
 * 432B
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

map<ll,ll> mp;
ll n;
cin>>n;
vector<pair<ll,ll>> v(n);
for0(i,n)
{
    cin>>v[i].fi>>v[i].se;
    mp[v[i].fi]++;
   // mp[v[i].se]++;
}
vector<pair<ll,ll>> ans(n);
for0(i,n)
{
    ans[i].fi = n-1;
    ans[i].fi +=mp[v[i].se];
    ans[i].se = 2*(n-1) - ans[i].fi;
}
for0(i,n)
{
    cout<<ans[i].fi<<" "<<ans[i].se<<endl;
}

    return 0;
}

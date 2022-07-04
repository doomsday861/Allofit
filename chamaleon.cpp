/**
 * chamaleon
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
ll sum=0;
vll v(n);
for0(i,n)
{
    sum+=v[i];
}
ll ans = sum;
for0(i,n)
{
    ll cursum =v[i];
    ans = max(sum-cursum+k,ans);
    for(ll j= i+1;j<n;j++)
    {
        cursum +=v[j];
       // cout<<cursum<<endl;
        ll cursubsum = sum -cursum;
        ans = max(cursubsum + k*(j-i+1),ans);
    }
}
cout<<ans<<endl;

    return 0;
}

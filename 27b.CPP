/**
 * 27B
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
 vector<vll> v(n+1);
 ll won[n+1];
 memset(won,0,sizeof(won));
 for0(i,(n*(n-1)/2)-1)
 {
    ll x,y;
    cin>>x>>y;
    v[x].pb(y);
    v[y].pb(x);
    won[x]++;
 }
 vll ans;
 for1(i,n){
    if(v[i].size()!=n-1)
    {
        ans.pb(i);
    }
 }
 if(won[ans[0]]>won[ans[1]])
 {
    cout<<ans[0]<<" "<<ans[1];
 }
 else
    cout<<ans[1]<<" "<<ans[0];

    return 0;
}

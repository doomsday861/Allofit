/**
 * 514B
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
ll n;
unordered_map<float,ll> mp;
cin>>n;
vector<pair<ll,ll>> v(n);
ll x,y;
cin>>x>>y;
for0(i,n) cin>>v[i].fi>>v[i].se;
bool f=0;
ll ans=0;
bool vis[1001]={0};
//(x2-x1)(y3-y1) == (x3-x1)(y2-y1)
for0(i,n)
{
    if(vis[i])
        continue;
    ans++;
    for0(j,n)
    {
        ll cur =(v[i].fi-x)*(v[j].se-y);
        ll cur2 = (v[j].fi-x)*(v[i].se-y);
  //      cout<<cur<<" "<<cur2<<endl;
        if(cur==cur2)
        {
            vis[j]=1;
        }
    }
}
// for(auto x:mp)
// cout<<x.fi<<" "<<x.se<<endl;
// if(f)
// cout<<mp.size()+1;
// else
// cout<<mp.size();
cout<<ans;

    return 0;
}

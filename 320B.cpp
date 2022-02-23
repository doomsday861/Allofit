/**
 * 320B
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
vector<vll> v(10001);
bool vis[1001];
bool f=0;
void dfs(ll pos, ll end)
{
   vis[pos] = 1;
   if(pos==end)
   {
      f =1;
      return;
   }
   for(auto i:v[pos])
   {
      if(!vis[i])
         dfs(i,end);
   }
}
int main()
{
    run

ll n;    
 cin>>n;
 vector<pair<ll,ll>> vp;
 while(n--)
 {
   ll x,a,b;
   cin>>x>>a>>b;
   if(x==1)
   {
      for0(i,vp.size())
      {
         if(vp[i].fi < a && vp[i].se > a || vp[i].fi < b && vp[i].se > b)
         {
            v[vp.size()].pb(i);
         }
         if(((a<vp[i].first and vp[i].first<b )|| (a< vp[i].second and vp[i].second<b)))
         {
            v[i].pb(vp.size());
         }
      }
      vp.pb({a,b});
   }
   else
   {
       a--;
       b--;
       for0(i,110)
       {
         vis[i] =0;
       }
       f=0;
       dfs(a,b);
       if(f)
       {
         cout<<"YES"<<endl;
       }
       else
         cout<<"NO"<<endl;
   }
 }

    return 0;
}
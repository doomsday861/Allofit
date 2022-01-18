/**
 * palint codechef
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool sorter(pair<ll,ll> a, pair<ll,ll>b)
{
    if(a.first > b.first)
    return true;
    if(a.first == b.first)
    {
        return (b.second > a.second);
    }
    return false;
}
void zerocalled(ll n, ll x)
{
    vector<ll> v(n);
    map<ll,ll> fr;
    for(ll i=0; i < n;i++)
    {
        cin>>v[i];
        fr[v[i]]++;
    }
    ll ans =0;
    for(auto r:fr)
    {
        ans = max(ans,r.second);
    }
    cout<<ans<<" "<<0<<'\n';
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
      ll n,x;
      cin >>n>>x;
      if(x==0)
      {
          zerocalled(n,x);
          continue;
      }
      map<ll,ll>m1;
      map<ll,ll>m2;
      for(ll i=0; i < n;i++)
      {
          ll r;
          cin>>r;
          m1[r]++;
          m2[r^x]++;
      }
      vector<pair<ll,ll>> ans;
    for(auto x:m1)
      {
          ll a,b;
          auto it = m2.find(x.first);
          if(it==m2.end())
          {
              b=0;
          }
          else
          {
              b = it->second;
          }
          a = x.second;
        ans.push_back({a+b,b});          
      }
    sort(ans.begin(),ans.end(),sorter);
    // for(auto x:ans)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    cout<<ans[0].first<<" "<<ans[0].second<<endl;
    m1.clear();
    m2.clear();
}
    return 0;
}
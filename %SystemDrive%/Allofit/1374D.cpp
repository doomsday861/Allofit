/**
 * 1374D
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
testcase
{
      ll n,k;
      cin >>n>>k;
      vector<ll> v(n);
      map<ll,ll> mp;
      mp.clear();
      for(ll i=0; i < n;i++){
        cin>>v[i];
       mp[v[i]%k]++;
     //  cout<<k-v[i]%k<<endl;
      }
      ll ans=0;
      for(auto x:mp)
      {
          if(x.first!=0)
          ans = max(ans, x.second*k - x.first);
      }
      if(ans!=0) ans++;
      cout<<ans<<endl;
}
   return 0;
}
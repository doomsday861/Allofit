/**
 * 1546A 
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
      ll n;
      cin>>n;
      vector<ll> a(n);
      vector<ll> b(n);
      map<ll,ll> mp;
      ll sum1,sum2;
      sum1=sum2=0;
      vector<pair<ll,ll>> ans(1000000);
      for(ll i=0; i < n;i++)
      {
          cin>>a[i];
          sum1+=a[i];
      }
      ll cnt=0;
      ll fc=0;
      ll lc=0;
      for(ll i=0; i<n;i++)
      {
          cin>>b[i];
          sum2+=b[i];
          if(a[i] > b[i])
          {
              for(ll j=1;j<=a[i]-b[i];j++)
              {
                  ans[fc].first = i+1;
                  fc++;
              }
              cnt++;
          }
          if(a[i] < b[i])
          {
              for (ll j = 1; j <= b[i] - a[i]; j++)
              {
                  ans[lc].second = i + 1;
                  lc++;
              }
          }
      }
      if(sum1!=sum2)
      {
          cout<<-1<<endl;
          continue;
      }
    cout<<fc<<endl;
    for(ll i=0;i<fc;i++)
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
}
    return 0;
}
/**
 * 1348B CODEFORCES
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
      set<ll> dist;
      cin>>n>>k;
      vector<ll> v(n);
      for(ll i=0; i <n;i++){
         cin>>v[i];
         dist.insert(v[i]);
      }
      if(dist.size()> k)
      {
          cout<<-1<<endl;
          continue;
      }
    cout<<n*k<<endl;
    for(ll i=0; i <n;i++)
    {
        for(auto x:dist)
        {
            cout<<x<<" ";
        }
        for(ll j=0; j < k-(dist.size());j++)
        {
            cout<<1<<" ";
        }
    }
    cout<<endl;
}
    return 0;
}
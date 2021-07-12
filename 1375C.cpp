/**
 * 1375C
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
      bool ans=0;
      ll n;
      cin>>n;
      vector<ll> v(n);
      map<ll,ll> mp;
      ll mi = -1;
      ll mv = INT_MAX;
      for(ll i=0; i <n;i++) {
          cin>>v[i];
          mp[v[i]]++;
          if(mp[v[i]]>1)
          ans =1;
        if (mv > v[i])
        {
            mv = v[i];
            mi = i;
        }
}
if(v[0] >=v[n-1])
ans=1;

if(!ans)
cout<<"YES"<<endl;
else
{
    cout<<"NO"<<endl;
}
  }

    return 0;
}
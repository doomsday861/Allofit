/**
 * HILLSEQ CODECHEF
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
      vector<ll> v(n);
      map<ll,ll> mp;
      mp.clear();
      bool f=0;
      for(ll i=0 ; i < n;i++)
      {
           cin>>v[i];
           mp[v[i]]++;
           if(mp[v[i]]>2)
           f =1;
      }
      sort(v.begin(),v.end());
      if(mp[v[n-1]]>=2)
      f=1;
      vector<ll> ans(n);
      ll l =n-1;
      ll r= 0;
      while(l>r)
      {
          if (v[l - 1] != -1)
          {
              ans.push_back(v[l - 1]);
              v[l - 1] = -1;
          }
          if(v[l]!= -1)
        {
              ans.push_back(v[l]); 
          v[l]=-1;
        }
        if (v[r + 1] != -1)
        {
            ans.push_back(v[r + 1]);
            v[r + 1] = -1;
        }
          if(v[r]!=-1)
        {
              ans.push_back(v[r]); 
              v[r] = -1;
        }

        l-=2;
        r+=2;  
      }
      if(f)
      {
          cout<<-1<<endl;
          continue;
      }
      for(auto x:ans)
      cout<<x<<" ";
      cout<<endl;
}
    return 0;
}
/**
 * 1363B CODEFORCES
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
      string s;
      cin>>s;
      ll count=0;
      ll n = s.length();
      ll onec=0;
      ll zeroc=0;
      ll i=0;
      if(n<=2)
      {
          cout<<0<<endl;
          continue;
      }
     for(ll i=0; i <n;i++)
     {
         if(s[i]=='1')
         onec++;
         else
         {
             zeroc++;
         }
     }
    ll ans = min(onec,zeroc); // whole string
    ll start =0;
    ll end = n-1;
     i=0;
     ll ones=0;
     ll zeros=0;
    for(ll i=0;i <n;i++)
    {
        ones +=(s[i]=='1'), onec -=(s[i]=='1');
        zeros +=(s[i]=='0'),zeroc -=(s[i]=='0');
        ans = min(ans,ones+zeroc);
        ans = min(ans,zeros+onec);
    }
 //   ans = min(ans,min(once,last));
    cout<<ans<<endl;
}
    return 0;
}
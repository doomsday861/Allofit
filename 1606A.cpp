/**
 * 1606A 
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
      ll ab=0;
      ll ba=0;
      ll n = s.length();
      if(s[0]==s[n-1])
      {
          cout<<s<<endl;continue;
      }
      else
      {
          s[0] = s[n-1];
          cout<<s<<endl;
      }
      


}
    return 0;
}
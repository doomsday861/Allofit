/**
 * 1606B
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
      cin>>n>>k;
      ll ans=0;
      ll c =1;
      while(c<k)
      {
          c*=2;
          ans++;
      }
    //   ans += n/k;
    if(c<n)
      ans += (n-c+k-1)/k;
        cout<<ans<<endl;

}
    return 0;
}
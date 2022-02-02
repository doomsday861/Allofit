/**
 * 437B
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
int PositionRightmostSetbit(int n)
{
  int p=1;
   
  while(n > 0)
  {
         if(n&1){
      return p;
    }
    p++;
    n=n>>1;
  }
     return -1;
}

int main()
{
    run
 ll limit,sum;
 cin>>sum>>limit;
 ll maxs = 0;
 for(ll i=1;i<=limit;i++)
 {
    maxs+=pow(2,PositionRightmostSetbit(i)-1); 
 }
 if(maxs < sum)
 {
   cout<<-1;
   return 0;
 }
 set<ll> ans;
 ll cursum=0;
 for(ll i = limit;i>=1;i--)
 {
   if(cursum == sum)
   {
      break;
   }
   if(cursum+pow(2,PositionRightmostSetbit(i)-1) <=sum)
   {
 //     cout<<i<<" "<<pow(2,PositionRightmostSetbit(i)-1)<<endl;
      cursum +=pow(2,PositionRightmostSetbit(i)-1);
      ans.insert(i);
   }
 }
// cout<<cursum<<endl;
 cout<<ans.size()<<endl;
 for(auto x:ans)
   cout<<x<<" ";

    return 0;
}

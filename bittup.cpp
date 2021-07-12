/**
 * bittup
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
#define MOD 1000000007
ll pow(ll a, ll b)
{
	ll ans = 1;
  a = a%MOD;
  if(a==0)
    return 0;
  while(b>0)
  {
    if( b & 1)
      ans = (ans*a)%MOD;
    b = b>>1;
    a =(a*a)%MOD;
  }
  return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	ll n,m;
  	cin >>n>>m;
  	//cout<<(pow(2,n)-1)<<endl;
  //int ans = pow((pow(2,n)-1),m);
  	ll a = pow(2,n)-1;
 // 	cout<<a<<endl;
 // 	cout<<m<<endl;
  	ll ans = pow(a,m);
  	cout<<ans<<endl;
  }

    return 0;
}
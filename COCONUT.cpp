/**
 * COCONUT
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
  	ll a,b,c,d;
  	cin>>a>>b>>c>>d;
  	ll x = ceil(c/a);
  	ll y = ceil(d/b);
  	cout<<x+y<<endl;
}
    return 0;
}
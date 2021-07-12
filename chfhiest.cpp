/**
 * chfhiest
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
  	ll counter =0;
  	ll divi = a/b;
  	if(divi&1)
  	{
  		counter = b*(divi*(c+((divi-1)>>1)*d));
  	}
  	else
  	{
  		counter = b*((divi>>1)*(2*c+(divi-1)*d));
  	}
  	ll remai = (a%b)*(c+divi*d);
  	ll ans = counter+remai;
  	cout<<ans<<endl;
}
    return 0;
}
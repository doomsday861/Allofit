/**
 * stresstry
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

  	ll a,b;
  	string ans;
  	for(ll i=23123;i<=123124;i+=2)
  	{
  		ans ="";
  		for(ll j= 2434234;j<=9999999;j++)
  		{
  			ll temp1 =i;
  			ll temp2 =j;
  			while(temp1>0 && temp2>0)
  			{

  				ans+=(to_string((temp1%10)+(temp2%10)));
  				temp1/=10;temp2/=10;
  			}
            reverse(ans.begin(),ans.end());
  		cout<<i<<" "<<j<<"="<<endl<<ans<<endl;
  		}
  	}
    return 0;
}
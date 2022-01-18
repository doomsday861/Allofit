/**
 * 1617B
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
  	ll a,b,c;
  	if(!(n&1))
  	{
  		c =1;
  		n--;
  		ll a = floor(n/2);
  		ll b = ceil(n/2)+1;
  		cout<<a<<" "<<b<<" "<<c<<endl;
  	}
  	else
  	{
  		ll a = (n-1)/2;
  		if(!(a&1))
  			cout<<a+1<<" "<<a-1<<" "<<1<<endl;
  		else
  			cout<<a-2<<" "<<a+2<<" "<<1<<endl;
  	}
}
    return 0;
}
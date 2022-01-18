/**
 * 1619A
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
  	bool f=0;
  	string s;
  	cin>>s;
  	ll x = s.length();
  	if(x&1)
  		cout<<"NO"<<endl;
  	else
  	{
  		for(ll i=0; i<(x/2);i++)
  		{
  			if(s[i]!=s[i+(x/2)])
  				f=1;
  		}
  		if(f)
  		{
  			cout<<"NO"<<endl;
  		}
  		else
  			cout<<"YES"<<endl;
  	}
}
    return 0;
}
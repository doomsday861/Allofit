/**
 * 1619C retry
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
  	string a,s;
  	cin>>a>>s;
  	ll l = a.length()-1;
  	ll r = s.length()-1;
  	string ans="";
  	bool f=0;
  	for(ll l = a.length()-1; l>=0;l--)
  		{
  			if(s[r]>=a[l])
  		{
  			int temp = (s[r]-'0') - (a[l]-'0'); 
  			r--;
  			ans+=to_string(temp);
  		}
  		else
  		{
  			if(s[r-1]!=1)
  			{
  				f=1;
  				break;
  			}
  			int temp = (s[r]-'0') - (a[l]-'0')+10;
  			ans+=to_string(temp);
  			r-=2;
  		}
  	}
  	if(f)
  	{
  		cout<<-1<<endl;
  	}
  	else
  	cout<<ans<<endl;
	}
    return 0;
}
/**
 * xystr codechef long june 2020
 * Kartikeya (doomsday861)
 * meow
**/
#include<bits/stdc++.h>
#include<time.h>
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
  	ll c=0;
  	ll n = s.length();
  	for(ll i=0;i<(ll)s.length();i++)
  	{
  		if(i<n-1 && s[i]=='x' && s[i+1]=='y')
  		{
  			c++;
  			s[i]='s';
  			s[i+1]='s';
  		}
  		if(i<n-1 && s[i]=='y' && s[i+1]=='x')
  		{
  			c++;
  			s[i]='s';
  			s[i+1]='s';
  		}
  	}
  	cout<<c<<endl;
}
    return 0;
}
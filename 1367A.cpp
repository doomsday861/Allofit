/**
 * 1367A codeforces
 * Kartikeya (doomsday861)
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
  	cin >> s;
  	ll c=0;
  	bool f=0;
  string a="";
  for(ll i =0; i< s.length();i++)
  {
	if((s[i]!=s[i+1] && c==0)||(f))
	{
		a +=s[i];
		c=1;
		f=0;
	}	
	else
	{
		c=0;
		f=1;
	}
  }
  // if(s[s.length()-2]!=s[s.length()-1] && c==1)
  // {
  // 	a +=s[s.length()-1];
  // }
  if(s[s.length()-2]==s[s.length()-1] && c==0)
  {
  	 a +=s[s.length()-1];
  }
  cout<<a<<endl;
}
    return 0;
}
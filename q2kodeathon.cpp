/**
 * Q2 SOLUTION
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

testcase{
string s;
cin >>s;
int l = 0;
int c =0;
for(ll i=0;i<s.length();i++)
{
	if(s[i]=='c' && c==0)
		c++;
	else if(s[i]=='o' && c==1)
			c++;
	else if(s[i]=='v' && c==2)
			c++;
	else if(s[i]=='i'&&c==3)
			c++;
	else if(s[i]=='d'&&c==4)
			c++;
}
if(c==5)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}
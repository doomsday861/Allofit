/**
 * 58A codeforces
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
string s;
cin >>s;
int l = 0;
int c =0;
for(ll i=0;i<s.length();i++)
{
	if(s[i]=='h' && c==0)
		c++;
	else if(s[i]=='e' && c==1)
			c++;
	else if(s[i]=='l' && c==2)
			c++;
	else if(s[i]=='l'&&c==3)
			c++;
	else if(s[i]=='o'&&c==4)
			c++;
}
if(c==5)
cout<<"YES";
else
cout<<"NO";
return 0;
}
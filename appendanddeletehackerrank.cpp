/**
 * APPEND AND DELETE HACKERRANK
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
string s,t;
cin>>s>>t;
int k;
cin>>k;
ll c=0;

for(ll i=0;i<max(s.length(),t.length());i++)
{
	if(i<s.length() && i<t.length() && s[i]!=t[i])
		{
			c = (s.length()-i) + (t.length()-i); 
			break;
		}
	if( i >(t.length()-1))
	{
		c = (s.length()-i);
	//	cout<<"SLARGE"<<endl;
		break;
	}
	if( i >(s.length()-1))
	{
		c = (t.length()-i);
	//	cout<<"TLARGE"<<endl;
		break;
	}

}
//cout<<c<<endl;
if(c>k)
cout<<"No";
else
{
	if(t.length()+s.length() + c != k)
	{
		cout<<"No";
	}
	else
	cout<<"Yes";
}
}
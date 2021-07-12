/**
 * 191B138
 * VERIFYING AN IP ADDRESS
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool isbinary(string *s)
{
	for(ll i=0; i <4;i++)
	{
		//cout<<s[i].length()<<" "<<s[i]<<endl;
		if(s[i].length()!=8)
			return false;
	}
	return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
string s;
cin>>s;
int div[4];
string t ="";
int x=0;
s+='.';
int dot =0;
bool isbin =0;
string divs[4];
for(ll i=0; i < s.length(); i++)
{
	if(s[i]=='.')
	{
		//cout<<t<<endl;
		divs[x] = t;
		div[x] = stoi(t);
		x++;
		t = "";
		dot++;
	}
	else
		{
			t +=s[i];
			if(s[i] != '0' && s[i] != '1')
				{
					//cout<<s[i]<<endl;
					isbin =1;
				}
		}
}

if(!isbin)
{
	if(isbinary(divs))
	{
		cout<<"VALID IP ADDRESS"<<endl;
	}
	else
	{
		cout<<"INVALID IP ADDRESS"<<endl;
	}
	return 0;
}
bool f=0;
for(ll i=0; i <4; i++)
{
	for(ll j=0; j <divs[i].length();j++)
	{
		if(divs[i][j]=='0' && divs[i].length() > 1)
			{
				cout<<"INVALID IP ADDRESS"<<endl;
				return 0;
			}
	}
}
if(dot==4)
f=0;
for(ll i=0;i < 4; i++)
	{	
		if(div[i]>=0 && div[i]<=255)
		{
			string temp = to_string(div[i]);
			//cout<<temp<<endl;
			if(temp[0]=='0' && temp.length() > 1)
			{
				f =1;
			}
		}
		else
			f =1;
}
if(f==1)
cout<<"INVALID IP ADDRESS";
else
cout<<"VALID IP ADDRESS";
}
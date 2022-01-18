/**
 * 32B
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
cin>>s;
string ans;
for(ll i=0; i < s.length();i++)
{
	if(s[i]=='.')
	{
		ans.push_back('0');
	}
	else if(s[i]=='-' && i!=s.length()-1)
	{
		if(s[i+1]=='.')
		{
			ans.push_back('1');
		}
		if(s[i+1]=='-')
		{
		ans.push_back('2');
		}
		i++;
	}
}
cout<<ans;
    return 0;

}
/**
 * 191B138
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;

int main() {

	ll n;
	cin>>n;

	char str[110];
	scanf("%s", str);
	
	ll d = strlen(str);
	ll i = 0;

	string st1, st2;

	for(i = 0; i < d; ++i)
	{
		if(str[i] == '*')
		{
			break;
		}
		st1.push_back(str[i]);
	}

	for(++i; i < d; ++i)
		{
			st2.push_back(str[i]);
		}

	for(int i = 0; i < n; ++i)
	{
		char tmp[110]; scanf("%s", tmp);
		string s = tmp;

		if(st1.size() + st2.size() > s.size()) {
			cout<<"NO"<<endl;
			 continue;
	}

		if(s.substr(0, st1.size()) != st1) 
		{
			cout<<"NO"<<endl; 
			continue;
		}
		if(s.substr(s.size() - st2.size(), st2.size()) != st2) 
		{
			cout<<"NO"<<endl;
			continue;
		}
		
		cout<<"YES"<<endl;
			
		}

	return 0;

}

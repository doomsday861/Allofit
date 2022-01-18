/**
 * 1620 A
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
  	string s;
  	cin>>s;
  	int n = s.length();
  	vector<int> v;
  	int ec=0;
  	int en=0;
  	int counter=0;
  	for(int i=0; i < s.length();i++)
  	{
  		if(s[i]=='N') en++;
  	}
  	if(en>=2 || en==0)
  		cout<<"YES"<<endl;
  	else
  		cout<<"NO"<<endl;
}
    return 0;
}
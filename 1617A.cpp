/**
 * 1617 A CODEFORCES
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
  	string t;
  	cin>>t;
  	sort(s.begin(),s.end());
  	map<char,int> mp;
  	mp.clear();
  	string ans="";
  	for(auto x:s)
  		mp[x]++;
  	if(t=="abc" && mp['a']>=1 && mp['b'] >=1 && mp['c'] >=1 )
  	{
  		int temp = mp['a'];
  		for(int i=0; i<temp;i++)
  		{
  			ans+='a';
  		}
  		mp['a']=0;
  		 temp = mp['c'];
  		for(int i=0; i<temp;i++)
  		{
  			ans+='c';
  		}
  		mp['c'] =0;
  		 temp = mp['b'];
  		for(int i=0; i<temp;i++)
  		{
  			ans+='b';
  		}
  		mp['b'] =0;
  	}
  	else
  	{
   		cout<<s<<endl;
  		continue;
  	}

  	for(auto x:mp)
  	{
  		if(x.second!=0)
  		{
  			for(int i=0; i <x.second;i++)
  			{
  				ans+=x.first;
  			}
  		}
  	}
  //	sort(ans.begin(),ans.end());
  	cout<<ans<<endl;
}
    return 0;
}
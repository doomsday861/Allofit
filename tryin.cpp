#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 string smallestWindow (string s, string p)
	{
		if(p.length()>s.length())
		{
			return "-1";
		}
		map<char,int> mp;
		int freq[256]={0};
		int start=0;
		int end =0;
		int ans =INT_MAX;
		int mstart=0;
		int mend =0;
		for(int i=0;i<p.length();i++)
		{
			mp[p[i]]++;
		}
		int cnt = p.length();
		for(int i=0; i  < s.length();i++)
		{
			if(mp.find(s[i])!=mp.end())
			{
				mp[s[i]]--;
			}
			if(mp[s[i]]==0)
				cnt--;
		while(cnt==0)
		{
			if(ans>end-start+1)
			{
				ans = end-start+1;
				mstart = start;
				mend = end;
			}
			cout<<start<<" "<<end<<endl;
			if(mp.find(s[start])!=mp.end())
			{
				mp[s[start]]++;
				if(mp[s[start]] > 0)
				{
					cnt++;
				}
			}
			start++;
		}
		end++;
	}
	return "1";
}
};
int main()
{
	string s,t;
	cin>>s>>t;
	Solution obj;
	cout<<obj.smallestWindow(s,t);
}

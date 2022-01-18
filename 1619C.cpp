/**
 * 1619C 
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
  	ll x,y;
  	cin>>x>>y;
    bool f=0;
  	string s = to_string(y);
  	string a = to_string(x);
  	ll counter1=a.length()-1;
  	ll counter2=s.length()-1;
  	stack<ll> sum;
  	stack<ll> num;
  	string ans;
  	if(x>y)
    {
        f=1;
    }
  	for(ll i=0; i <s.length();i++)	
  	{
  		sum.push(s[i]-'0');
  	}
  	for(ll i=0; i<a.length();i++)
  	{
  		num.push(a[i]-'0');
  	}
  	while(!num.empty())
  	{
  		string temp="";
  		string first="";
  		string second="";
  		if(sum.empty())
  		{
  	         f=1;
  			break;
  		}
        int res=0;
  		first = num.top()+'0';
  		if(num.top()>sum.top() && sum.size()>=2 && !num.empty())
  		{
  			second = sum.top()+'0';
  			sum.pop();
  			second = second + to_string(sum.top());
            reverse(second.begin(),second.end());
  		}
  		else
  		{
  			second = sum.top()+'0';
  		}
  		int temp1 = stoi(first);
  		int temp2 = stoi(second);
  	    res = temp2-temp1;
        if(res>10)
            f=1;
  		sum.pop();
  		num.pop();
  		ans+=to_string(res);
  	}
    while(!sum.empty())
    {
        ans+= sum.top()+'0';
        sum.pop();
    }
    reverse(ans.begin(),ans.end());
    ll rans = stoll(ans);
    if(!f)
  	cout<<rans<<endl;
    if(f)
        cout<<-1<<endl;
}
    return 0;
}
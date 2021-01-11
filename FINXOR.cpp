/**
 * FINXOR
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define endl '\n'
using namespace std;
int binaryToDecimal(string n) 
	{ 
		string num = n; 
		int dec_value = 0; 
		int base = 1; 
		int len = num.length(); 
		for (int i = len - 1; i >= 0; i--) { 
			if (num[i] == '1') 
				dec_value += base; 
			base = base * 2; 
		} 
		return dec_value; 
	} 
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);

 testcase
  {
  	ll n;
  	cin>>n;
  	cout<<1<<" "<<1048576<<endl;
  	ll x;
  	cin>>x;
  	ll sum = x - (n*1048576);
  	string ans;
  	if(sum%2!=0)
  		ans +='1';
  	else
  		ans +='0';
  	for(ll i=0;i<=19;i++)
  	{
  		cout<<"1 "<<(1<<i)<<endl;
  		int x;
  		cin>>x;
  		int diff = sum-x;
  		int sub = n*(1<<i);
  		int z = (diff-sub)/(1<<(i+1));
  		if(x-sub == sum)
  		{
  			ans +='0';
  			continue;
  		}
  		if(n%2==0)
  		{
  			if(z == n/2)
  			{
  				if((n/2)%2 !=0)
  					ans +='1';
  				else
  					ans +='0';
  			}
  			else if(z%2==0)
  			{
  				ans +='0';
  			}
  			else
  			{
  				ans +='1';
  			}
  		}
  		else
  			{
  				if(z%2==0)
  				{
  					ans +='1';
  				}
  				else
  				{
  					ans +='0';
  				}
			}
		}
	reverse(ans.begin(), ans.end());
	cout<<2<<" "<<binaryToDecimal(ans)<<endl;
	int c;
	cin>>c;
	if(c==-1)
		return 0;

  	}
    return 0;
} 
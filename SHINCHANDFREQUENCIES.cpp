/**
 * SHINCHAN AND FREQUENCIES
 * KARTIKEYA SRIVASTAVA
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
  	ll n;
  	cin>>n;
  	string s;
  	cin>>s;
  	char x;
  	cin>>x;
  	ll count=0;
  	for(ll i=0; i <n;i++)
  	{	
  		if(s[i]==x)
  			count++;
  	}
  	cout<<count<<endl;
}
    return 0;
}
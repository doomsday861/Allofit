/**
 * 1615A
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
  	ll s=0;
  	for(ll i=0; i <n;i++)
  	{
  		int x;
  		cin>>x;
  		s+=x;
  	}
  	if(s%n==0)
  		cout<<"0"<<endl;
  	else
  		cout<<1<<endl;
}
    return 0;
}
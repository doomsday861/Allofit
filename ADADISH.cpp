/**
 * ADADISH
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
  	vector<ll> ar(n);
  	for(ll i=0;i<n;i++)
  		cin>>ar[i];
  
  	sort(ar.begin(),ar.end(),greater<ll>());
  	if(n==1)
  		cout<<ar[0]<<endl;
  	else if(n==2)
  	{
  		cout<<max(ar[0],ar[1])<<endl;
  	}
  	else if(n==3)
  	{	
  		cout<<max(ar[1]+ar[2],ar[0])<<endl;	
  	}
	else
	{
		cout<<min(max(ar[3]+ar[0],ar[1]+ar[2]),max(ar[3]+ar[2]+ar[1],ar[0]))<<endl;
	}  	
}
    return 0;
}
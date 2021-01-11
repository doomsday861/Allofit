/**
 * CHEFNWRK
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
  	ll n,k;
  	cin>>n>>k;
  	ll ar[n];
  	bool f=0;
  	for(ll i=0;i<n;i++)
  		{
  			cin>>ar[i];
  			if(ar[i]>k)
  			{
  				f=1;
  			}
  		}
  	if(f)
  		{
  			cout<<-1<<endl;
  			continue;
  		}
  	ll sum=0;
  	ll s=1;
  	for(ll i=0;i<n;i++)
  	{
  		sum +=ar[i];
  		if(sum>k)
  		{
  			s++;
  			sum =0;
  			i--;
  		}
  	}
  	cout<<s<<endl;
}
    return 0;
}
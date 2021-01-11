/**
 * REPLESX codechef
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
  	ll n,x,p,k;
  	cin>>n>>x>>p>>k;
  	ll ar[n];
  	ll ar2[n+1];
  	for(ll i=0;i<n;i++)
  	{
  		cin>>ar[i];
  		ar2[i] = ar[i]; 
  	}
	sort(ar2,ar2+n+1);
	int count=0;
	if(ar2[p]==x)
	{
		count = 0;
	}
	else if(k>=p && ar2[p] >= x)
	{
		count = k-p;
	}
	else if(k<=p && ar2[p] <= x)
	{
		count = p-k;
	} 	
	else
	{
		count = -1;
	}
	cout<<count<<endl;
}
    return 0;
}
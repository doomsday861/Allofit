/**
 * EVENM CODECHEF
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
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
  	cin >>n;
  	ll ar[n][n];
  	ll c = 1;
  	for(ll i=0;i<n;i++)
  	{
  		if(i&1)
  			c +=n-1;
  		if(i!=0 && !(i&1))
  		 	c += n+1;
  		for(ll j=0;j<n;j++)
  		{
  			ar[i][j] = c;
  			if(i&1)
  				c--;
  			else 
  				c++;
  		}
  	}
  	for(ll i=0 ;i <n;i++)
  	{
  		for(ll j=0;j<n;j++)
  		{
  			cout<<ar[i][j]<<" ";
  		}
  		cout<<endl;
  	}
  	// for(ll i=0;i<n;i++)
  	// {
  	// 	for(ll j=0;j<n;j++)
  	// 	{
  	// 		for(ll a=0;(a+i<n && a+j<n);a++)
  	// 		{
  	// 			if((ar[i][j]+ar[i+a][j+a])&1)
  	// 			{
  	// 				cout<<"NO  "<<i<<" "<<j<<" "<<a<<endl;
  	// 			}
  	// 			if((ar[i][j+a] + ar[i+a][j]) &1)
  	// 			{
  	// 				cout<<"NO2"<<endl;
  	// 			}
  	// 		}
  	// 	}
  	// }
}
    return 0;
}
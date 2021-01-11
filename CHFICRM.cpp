/**
 * CHFICRM CODECHEF JUNE LONG 2020
 * Kartikeya (doomsday861)
 * QUARANTINE KILLS.
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll inv[3];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {	
  	bool f =0;
  	memset(inv,0,sizeof(inv));
  	ll n;
  	cin>>n;
  	for(ll i=0;i<n;i++)
  	{
  		ll x;
  		cin>>x;
  		if(x==5)
  		{
  			inv[0]++;
  		}
  		if(x==10)
  		{
  			if(inv[0]>=1)
  			{
  				inv[0]--;
  				inv[1]++;
  			}
  			else
  			{
  				f=1;
  			}
  		}
  		if(x==15)
  		{
  			if(inv[1]>=1)
  			{
  				inv[1]--;
  			}
  			else if(inv[0]>=2)
  			{
  				inv[0] -=2;
  			}
  			else
  			{
  				f =1;
  			}
  		}
  	}
  	if(f)
  	{
  		cout<<"NO\n";
  	}
  	else
  		cout<<"YES\n";
}
    return 0;
}
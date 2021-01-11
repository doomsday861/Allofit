/**
 * CNDYGAME 
 NOV20
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
#define MOD 1000000007
ll n,q;
ll onepos;
void zero(ll ar[])
{	
	ll count=0;
	while(q--)
	{
		ll x;
		cin>>x;
		if(x%n==0)
		{
			count = (x/n)%MOD;
		}
		else if(x%n==1 && x > n)
			count = (x/n)%MOD;
		else
			count = (x/n+1)%MOD;
		cout<<count<<endl;
	}
}
void notlast(ll ar[])
{
	ll ans =0;
	ll prefixsum[100001];
	for(ll i=0;i<n-1;i++)
	{
		if(i==onepos-1)
		{
			if(ar[i]&1^1)
				{
					ans += ar[i]-1;
					prefixsum[i] = ans;
				}
			else
			{
				ans +=ar[i];
				prefixsum[i]= ans;
			}
		}
		else
		{
			if(ar[i]&1^1)
			{
				ans +=ar[i];
				prefixsum[i] = ans;
			}
			else
			{
				ans +=ar[i]-1;
				prefixsum[i] = ans;
			}
		}
	}
	if(ar[n-1]&1^1)
		ans +=ar[n-1]-1;
	else
		ans =ans+=ar[n-1];
	while(q--)
	{
		ll x;
		cin >>x;
		if(x%n==0)
		{
			if(ar[n-1]&1^1)
			{
				ll answer = ((x/n)*ans+1)%MOD;
				cout<<answer<<endl;
			}
			else
			{
				ll answer =  ((x/n)*ans)%MOD;
				cout<<answer<<endl;
			}
		}
		else
		{
			if(onepos== x%n-1)
			{
				if(ar[onepos-1]&1^1)
				{
					ll answer = ((x/n)*ans+2+prefixsum[x%n-1])%MOD;
					cout<<answer<<endl;
				}
				else
				{
					ll answer = ((x/n)*ans+prefixsum[x%n-1])%MOD;
					cout<<answer<<endl;
				}
			}
			else if(onepos-1 == x%n-1)
			{
				if(ar[onepos-1] & 1 ^ 1)
				{
					ll answer = ((x/n)* ans + prefixsum[x%n-1]+1)%MOD;
					cout<<answer<<endl;
				}
				else
				{
					ll answer = ((x/n)*ans+prefixsum[x%n-1]) % MOD;
					cout<<answer<<endl;
				}
			}
			else
			{
				if(ar[x%n-1]&1)
				{
					ll answer = ((x/n)* ans + prefixsum[x%n-1]+1)%MOD;
					cout<<answer<<endl;
				}
				else
				{
					ll answer = ((x/n)*ans+prefixsum[x%n-1]) % MOD;
					cout<<answer<<endl;
				}
			}
		}
	}
}
void last(ll ar[])
{
	ll counter=0;
	ll prefixsum[100001];
	for(ll i=0;i<n-1;i++)
	{
		if(ar[i]&1^1)
		{
			counter +=ar[i];
			prefixsum[i] = counter;
		}
		else
		{
			counter +=ar[i]-1;
			prefixsum[i] = counter;
		}
	}
	if(ar[n-1]&1^1)
		counter += ar[n-1]-1;
	else
		counter = counter+=ar[n-1];
	while(q--)
	{
		ll x;
		cin>>x;
		if(x%n==0)
		{
			if(ar[n-1]&1^1)
			{
				ll answer = ((x/n)*counter +1)%MOD;
				cout<<answer<<endl;
			}
			else
			{
				ll answer = ((x/n)*counter)%MOD;
				cout<<answer<<endl;
			}
		}
		else
		{
			if(ar[x%n-1]&1)
			{
				ll answer = ((x/n)*counter+prefixsum[x%n-1]+1)%MOD;
				cout<<answer<<endl;
			}
			else
			{
				ll answer = (((x/n)*counter + prefixsum[x%n-1])%MOD)+1-1;
				cout<<answer<<endl;
			}
		}
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	
  	cin>>n;
  	ll ar[n];
  	onepos = -1;
  	for(ll i=0;i<n;i++)
  		{
  			cin>>ar[i];
  			if(ar[i]==1)
  				onepos = i;
  		}
  	cin>>q;
  	if(onepos ==0)
  		zero(ar);
  	else if(onepos != n-1)
  		 notlast(ar);
  	else
  		last(ar);

}
    return 0;
}
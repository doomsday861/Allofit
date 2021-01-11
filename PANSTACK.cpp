/**
 * its been so long idk how to type.
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
ll store[1111][1111];
for(ll i=0; i <=1000;i++)
{	
	store[i][0] = store[i][i] = 1;
}
for(ll i =1;i<=1000;i++)
{
	for(ll j=1; j<i;j++)
	{
		store[i][j] = (store[i-1][j-1] + store[i-1][j]);
		if(store[i][j]>=1000000007)
		{
			store[i][j] %= 1000000007;
		}
	}
} 
ll ans[1001];
ans[0] = ans[1] = 1;
for(ll i=2; i <=1000;i++)
{
	for(ll j=0;j<i;j++)
	{
		ans[i] += (ans[j] * store[i-1][j]);
		if(ans[i]>=1000000007)	ans[i] %=1000000007;
	}
}
 testcase
  {
  	ll n;
  	cin>>n;
  	cout<<ans[n]<<endl;
	}
    return 0;
}
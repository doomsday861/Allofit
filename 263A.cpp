/**
 * 263A
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
ll a,b;
for(ll i=0; i < 5;i++)
{
	for(ll j=0; j < 5;j++)
    	{
    		ll x;
    		cin>>x;
    		if(x==1)
    			{
    				a =i; b=j;
    			}
    	}
}
ll ans = abs(2-a) + abs(2-b);
cout<<ans<<endl;
}
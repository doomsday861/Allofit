/**
 * PRICECON JUNE LONG CHALLENGE 2020
 * Kartikeya (doomsday861)
 *SCOUT OP
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
  	ll n,k;
  	cin >>n>>k;
  	ll a =0;
  	ll x;
  	for(ll i=0;i<n;i++)
  	{
  		cin>>x;
  		if(x>k)
  			a +=x-k;
  	}
  	cout<<a<<endl;
}
    return 0;
}
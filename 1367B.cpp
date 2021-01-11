/**
 * 1367B codeforces
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
  	//ll ar[n];
  	ll ec=0; //should be odd but is even
  	ll oc=0; //should be even but is odd
  	for(ll i=0; i < n;i++)
  	{
  		ll x;
  		cin>>x;
  		if(i&1^1 && x&1) // i is even but x is odd
  		{
  			ec++;
  		}
  		if(i&1 && x&1^1)
  		{
  			oc++;
  		}
  	}
  //	cout<<ec<<" "<<oc<<endl;
  	if(ec!=oc)
  	{
  		cout<<-1<<endl;
  	}
  	else
  	{
  		cout<<(ec+oc)/2<<endl;
  	}
}
    return 0;
}
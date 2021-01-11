/**
 * 427 A SPEED CODING
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
ll n;
cin >>n;
ll s=0;
ll c=0;
for(ll i=0;i<n;i++)
{
	ll a;
	cin>>a;
	s +=a;
	if(s<0)
	{
		c++;
		s=0;
	}
}
cout<<c<<endl;
}
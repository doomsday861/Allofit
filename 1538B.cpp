/**
 * 1538B FRIENDS AND CANDIES
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
  	ll n;
  	cin>>n;
  	vector<ll> v(n);
  	ll sum =0;
  	for(ll i=0; i < n;i++)
  	{
  		cin >>v[i];
  		sum +=v[i];
  	}
  	if(sum%n !=0)
  	{
  		cout<<-1<<endl;
  		continue;
  	}
  	ll ans=0;
  	for(ll i=0; i<n;i++)
  	{
  		if(v[i] > sum/n)
  			ans++;
  	}
  	cout<<ans<<endl;

}
    return 0;
}
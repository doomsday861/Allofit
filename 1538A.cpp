/**
 * 1538A STONE GAME
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
  	ll minn = LLONG_MAX;
  	ll maxx = LLONG_MIN;
  	ll mini = -1;
  	ll maxi = -1;
  	for(ll i=0; i < n ;i++)
  	{
  		cin>>v[i];
  		if(maxx < v[i])
  		{
  			maxx = v[i];
  			maxi = i+1;
  		}
  		if(minn > v[i])
  		{
  			minn = v[i];
  			mini = i+1;
  		}
  	}
  	ll p1 = max(mini,maxi);
  	ll p2 = min(mini,maxi) + (n-(max(mini,maxi))+1);
  	ll p3 = n - min(mini,maxi) +1;
  	cout<<min(p1,min(p2,p3))<<endl;
}
    return 0;
}
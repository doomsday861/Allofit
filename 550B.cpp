	/**
 * 550B codeforces
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
using namespace std::chrono;
 ll n,l,r,x;
 cin >>n>>l>>r>>x;
 vector<ll> v(n);
 for(ll i=0;i<n;i++)cin>>v[i];
ll c=0;
for(ll mask=0; mask<(1<<n);mask++)
{	ll subsetssum=0;
	ll counter=0;
	ll maxi=INT_MIN;
	ll mini=INT_MAX;
	for(ll i=0; i<n;i++)
	{
		if(mask & (1<<i))
		{
			subsetssum +=v[i];
			maxi = max(maxi,v[i]);
			mini = min(mini,v[i]);
			counter++;
		}
	}
	if(subsetssum>=l && subsetssum<=r && maxi-mini>=x && counter>=2)
		c++;
}
cout<<c<<endl;
    return 0; 
} 
	/**
 * 550B codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE 
// freopen("in.txt", "r", stdin); 
// freopen("output.ans", "w", stdout); 
// #endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 ll n,l,r,x;
 cin >>n>>l>>r>>x;
 vector<ll> v(n);
 for(ll i=0;i<n;i++)cin>>v[i];
ll c=0;
for(ll mask=0; mask<(1<<n);mask++)
{	ll ss=0;
	ll counter=0;
	ll maxi=INT_MIN;
	ll mini=INT_MAX;
	for(ll i=0; i<n;i++)
	{
		if(mask & (1<<i))
		{
			ss +=v[i];
			maxi = max(maxi,v[i]);
			mini = min(mini,v[i]);
			counter++;
		}
	}
	if(ss>=l && ss<=r && maxi-mini>=x && counter>=2)
		c++;
}
cout<<c<<endl;
//timee
    return 0; 
} 
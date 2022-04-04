	/**
 * 1350B CODEFORCES
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool prime[1000001];
void seives()
{
	memset(prime,1,sizeof(prime));
	for(ll i=2;i*i<=100000;i++)
	{
		if(prime[i])
		{
			for(ll j = i*i; j<=100000;j+=i)
			{
				prime[i]=false;
			}
		}
	}
}
ll ans()
{
	ll n;
	cin>>n;
	std::vector<ll> v(n);
	for(ll i=0 ; i <n;i++)
		cin>>v[i];
	if(n==1)
		return 1;
	ll a=0;
	for(ll i=0;i < n ;i++)
	{	
		ll count=1;
		ll m = v[i];
		ll li = i+1;
		for(ll j=i+1;j<n; j+=j)
		{
			if(v[j]>m && j%li==0)
			{
				m = v[j];
				count++;
				li =j;
			}
			
		}
		a = max(count,a);
	}
	return a;
}
int main()
{
#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
seives();
 testcase
  { 	
  	cout<<ans()<<'\n';
}
//timee
    return 0; 
} 
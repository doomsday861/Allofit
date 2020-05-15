	/**
 * 433 B codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll test;cin>>test;while(test--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
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
ll n;
cin>>n;
std::vector<ll> precum;
std::vector<ll> v(n);
vector<ll> v1(n);
precum.push_back(0);
ll ts=0;
	for(ll i=0;i<n;i++)
	{
		cin >>v[i];
		v1[i]=v[i];
		ts +=v[i];
		precum.push_back(ts);
	}
sort(v1.begin(), v1.end());
ts=0;
vector<ll> presum;
presum.push_back(0);
for (ll i = 0; i < n; ++i)
{
	ts +=v1[i];
	presum.push_back(ts);
}
ll q;
cin>>q;
while(q--)
{
	ll t,l,r;
	cin>>t>>l>>r;
	if(t==1)
	{
		ll ans = precum[r]-precum[l-1];
		cout<<ans<<endl;
	}
	if(t==2)
	{
		ll ans = presum[r]-presum[l-1];
		cout<<ans<<endl;
	}	
}
}
	/**
 * 79B codeforces
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
//time
ll n,m,k,t;
cin >> n>>m>>k>>t;
//vector<pair<ll,ll>> v;
vector<ll> v;
while(k--)
{
	ll a,b;
	cin >> a>>b;
	ll x = (a-1)*m + (b-1);
	v.push_back(x);
}
string s[] = {"Carrots","Kiwis","Grapes"};
while(t--)
{	
	ll a,b;
	cin >> a>>b;
	bool f=0;
	ll ans = (a-1)*m + (b-1);
	ll count=0;
	for(ll i =0; i < (ll)v.size();i++)
	{
		if(ans>v[i])
			count++;
		if(ans==v[i])
		{
			cout<<"Waste\n";
			f=1;
			break;
		}
	}
	if(f)
		continue;
	cout<< s[(ans-count)%3]<<'\n';
}
//timee
    return 0; 
} 
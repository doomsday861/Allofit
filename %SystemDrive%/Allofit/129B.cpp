	/**
 * 129B codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
vector<ll> v[10001];

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
ll n,m;
cin >>n>>m;
for(ll i=0; i < m;i++)
{	
	ll a,b;
	cin>>a>>b;
	v[a].push_back(b);
	v[b].push_back(a);
}
ll cnt=0;
ll ans=0;
while(1)
{	
	cnt=0;
	std::vector<ll> temp;
	for(ll i=1; i <=n ;i++)
	{
		if(v[i].size()==1)
		{
			cnt++;
			temp.push_back(i);
		}
	}
	if(cnt>0)
	{
		ans++;
		for(ll i=0; i < cnt; i++)
		{
			ll side = v[temp[i]][0];
			v[temp[i]].clear();
			v[side].erase(remove(v[side].begin(),v[side].end(),temp[i]), v[side].end());
		}
	}
	else
		break;
}
cout<<ans;
//timee
    return 0; 
} 
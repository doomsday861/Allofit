	/**
 * 1348A CODEFORCES
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
ll dif(vector<ll> v)
{	
	ll ls = v[v.size()-1];
	ll rs=0;
	ll cl=1;
	ll rl=0;
	for(ll i=0;i<(ll)v.size()/2-1;i++)
	{
		ls +=v[i];
		cl++;
	}
	for(ll i=v.size()/2-1;i<(ll)v.size()-1;i++)
	{
		rs +=v[i];
		rl++;
	}
//	cout<<cl<<' '<<rl<<' '<<ls<<' '<<rs<<endl;
	ll x= min(abs(ls-rs),abs(rs-ls));
	return x;
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
vector<ll> v;
vector<ll>ans;
for(ll i=0; i <30;i++)
{
	v.push_back(pow(2,i+1));
	if(i==0)
		continue;
	if((i-1)%2==0)
		ans.push_back(dif(v));
}
 testcase
 {
 	ll n;
 	cin >>n;
 	cout<<ans[(n/2)-1]<<endl;
}
//timee
    return 0; 
} 
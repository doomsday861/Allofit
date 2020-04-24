	/**
 * 10611  PLAYBOI 
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
 cin >>n;
vector<ll> v;
 for(ll i =0 ; i < n;i++)
 {	
 	ll x;
 	cin>>x;
 	v.push_back(x);
 }
ll q;
cin >> q;
vector<ll>::iterator low,high;
while(q--)
{
	ll x;
	cin >> x;
	if(x >= v[n-1])
	{
		low = lower_bound(v.begin(),v.end(),x);
		cout<<v[low-v.begin()-1];
		cout<<" X"<<endl;
		continue;	
	}
	if(x<=v[0])
	{
		cout<<"X ";
		high = upper_bound(v.begin(),v.end(),x);
		cout<<v[high-v.begin()]<<endl;
		continue;
	}
	low = lower_bound(v.begin(),v.end(),x);
	high = upper_bound(v.begin(),v.end(),x);
	cout<<v[low-v.begin()-1]<<" "<<v[high-v.begin()]<<endl;
}
//timee
    return 0; 
} 
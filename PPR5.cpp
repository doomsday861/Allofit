	/**
 * PPR5 BATMAN V SUPERMAN
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
 ll n,c;
  vector<ll> v;
bool place(ll x, ll z)
{	
	ll i =1;
	z--;
	ll lastp=1;
	while(i<n)
	{
		if(v[i]-lastp>=x)
			{
				z--;
				lastp =i;
			}
		i++;
	}
//	cout<<x<<" "<<z<<endl;
	if(z<0)
		return true;
	return false;
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
testcase{

 cin >> n >>c;
 for(ll i =0 ;  i < n;i++)
 {
 	ll x;
 	cin >>x;
 	 v.push_back(x);
 }
 sort(v.begin(),v.end());
 ll s = 1;
 ll f = v[n-1]-v[0];
 ll mid;
while(f-s>1)
{
	mid = (s+f)/2;
	if(place(mid,c))
	{
		s= mid;
	}
	else
		f = mid;
}
cout<<s<<endl;
//timee
}
    return 0; 
} 
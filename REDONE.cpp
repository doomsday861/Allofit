	/**
 * REDONE CODECHEF
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
vector<ll> v;
void fact()
{	ll i=1;
	ll j=1;
	ll x=1;
	while(x<=10000000)
	{	i *=j%1000000007;
		v.push_back(i);
		j++;
		x++;
	}
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
fact();
// for(ll i =0;i<10;i++)
// {
// 	cout<<v[i]<<" ";
// }
//cout<<v.size()<<endl;
 testcase
  { 	
  	ll n;
  	cin >>n;
  	cout<<v[n]-1<<endl;
}
//timee
    return 0; 
} 
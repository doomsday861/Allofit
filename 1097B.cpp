	/**
 * 1097B CODEFORCES
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
 ll n;
 cin>>n;
 vector<ll> v(n);
 ll ts=0;
 for(ll i=0;i<n;i++) cin>>v[i],ts+=v[i];
 	if(ts%360==0)
 	{
 		cout<<"YES";
 		return 0;
 	}
 	if(!(ts&1))
 		ts /=2;
 for(ll i=0; i < (1<<n);i++)
 {
 	ll ss=0;
 	for(ll x=0;x<n;x++)
 	{
 		if(i & (1LL<<x))
 		{
 			ss +=v[x];
 		}
 		else
 			ss -=v[x];
 	}
 	//cout<<ss<<endl;
 	if(ss%360==0)
 	{	
 	//	cout<<ss<<endl;
 		cout<<"YES";
 		return 0;
 	}
 }
 cout<<"NO";
 

//timee
    return 0; 
} 
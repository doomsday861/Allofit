	/**
 * LAPIN CODECHEF
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
 testcase
  { 	
  	string s;
  	cin>>s;
  	bool x=0;
 	vector<ll> f(26,0);
 	ll mid = s.length()/2;
 	for(ll i =0; i < mid ;i++)
 	{
 		f[s[i]-'a']++;
 	}
 	if(s.length()&1)
 	{
 		for(ll i=mid+1; i<(ll)s.length();i++)
 		{
 			f[s[i]-'a']--;
 		}
 	}
 	if(!(s.length()&1))
 	{
 		for(ll i=mid;i<(ll)s.length();i++)
 		{
 			f[s[i]-'a']--;
 		}
 	}
 	for(ll i=0; i < 26;i++)
 	{
 		if(f[i]!=0)
 		{
 			x=1;
 			break;
 		}
 	}
 	if(x)
 	{
 		cout<<"NO\n";
 	}
 	if(!x)
 	{
 		cout<<"YES\n";
 	}
 }
//timee
    return 0; 
} 
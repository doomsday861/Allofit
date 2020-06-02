	/**
 * CIPHER HACKERRANK
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
 ll n,k;
 cin >>n>>k;
 string s;
 cin >>s;
 int res[s.length()];
 for(ll i=0; i < n;i++)
 {
 	if(i==0)
 		res[i] = s[i]-'0';
 	else if(i<k)
 	{
 		res[i] = (s[i]-'0') ^ (s[i-1]-'0');
 	}
 	else
 	{
 		res[i] = (s[i]-'0') ^ (s[i-1]-'0') ^(res[i-k]);
 	}
 	cout<<res[i];
 }
//timee
    return 0; 
} 
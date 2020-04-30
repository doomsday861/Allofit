	/**
 * Designer PDF hackerrank
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
 ll ar[30];
 for(ll i= 0 ; i <26;i++)
 {
 	cin >>ar[i];
 }
 string s;
 cin>>s;
 ll n = s.length();
 ll max =0;
 for(ll i =0 ; i <s.length();i++)
 {
 		if(ar[s[i]-'a']>max)
 		max = ar[s[i]-'a'];
 }
 cout << max*n<<endl;
//timee
    return 0; 
} 
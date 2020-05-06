	/**
 * 102B CODEFORCES
 * Kartikeya (doomsday861)
 * SICK OF WANTING MORE
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
 string s;
 cin >> s;
 ll c=0;
 ll x=0;
 while(s.length()!=1)
 {	
 	x++;
 	c=0;
 	for(ll i=0; i<(ll)s.length();i++)
 		c += s[i]-'0';
 	s = to_string(c);
 }
 cout<<x<<'\n';
//timee
    return 0; 
} 
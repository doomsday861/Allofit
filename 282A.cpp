	/**
 * 282A 
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
 string s;
 cin >> s;
 ll c = 1;
 for(ll i =0 ; i <s.length();i++)
 {
 	if(s[i]=='0')
 		c *=2;
 	if(s[i]=='1')
 		c *=7;
 	if(s[i]=='2')
 		c *=2;
 	if(s[i]=='3')
 		c *=3;
 	if(s[i]=='4')
 		c *=3;
 	if(s[i]=='5')
 		c *=4;
 	if(s[i]=='6')
 		c *=2;
 	if(s[i]=='7')
 		c *=5;
 	if(s[i]=='8')
 		c *=1;
 	if(s[i]=='9')
 		c *=2;
 }
 cout<< c<<endl;
//timee
    return 0; 
} 
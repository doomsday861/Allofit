	/**
 * CHRL2 CODECHEF
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
 ll c=0,h=0,e=0,f=0;
 for(ll i =0 ; i < s.length();i++)
 {
 	if(s[i]=='C')
 		c++;
 	if(s[i]=='H'&&c>h)
 		h++;
 	if(s[i]=='E'&& h>e)
 		e++;
 	if(s[i]=='F'&& e>f)
 		f++;
 }
 cout<<f<<endl;
//timee
    return 0; 
} 
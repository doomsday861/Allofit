	/**
 * 1204A codeforces
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
if(s[0]=='0')
{
	cout<<0<<endl;
	return 0;
}
ll x = s.length();
//cout<< x<<endl;
ll c=0;
for(ll i =0 ;i<x;i++)
{
	if(s[i]=='1')
		c++;
}
if(c==1)
cout<<((x)/2)<<endl;
else
cout<<((x+1)/2)<<endl;


//timee
    return 0; 
} 
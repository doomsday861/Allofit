	/**
 * 514A codeforces
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
cin >>s;
bool f=0;
ll c=0;

for(ll i =0; i < s.length();i++)
{
	if(i==0 && s[i]=='9')
		continue;
	ll x = s[i]-48;
	if(x>4)
		x = 9-x;
	s[i] = x+'0';
}
cout<<s<<endl;
//timee
    return 0; 
} 
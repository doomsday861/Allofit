	/**
 * 71A CODEFORCES
 * Kartikeya (doomsday861)
 * I'm Bored OF LIFE.
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
  	cin >>s;
  	if(s.length()>10)
  	{
  		cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
  	}
  	else
  		cout<<s<<endl;
}
//timee
    return 0; 
} 
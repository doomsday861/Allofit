	/**
 * MARCH COOK OFF 2020
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
  	ll n;
  	cin >>n;
  	string s;
  	cin >>s;
  	char prev='\0';
  	ll x,y;
  	x=0; y=0;
  	for(ll i =0; i < s.length();i++)
  	{	
  		if(((prev=='L' || prev=='R')&&(s[i]=='R'||s[i]=='L'))||((prev=='U'||prev=='D')&&(s[i]=='U'|| s[i]=='D')))
  			continue;
  		if(s[i]=='L')
  			x--;
  		if(s[i]=='R')
  			x++;
  		if(s[i]=='U')
  			y++;
  		if(s[i]=='D')
  			y--;
  		prev = s[i];
  	}
  	cout << x <<" "<< y << endl;
}
//timee
    return 0; 
} 
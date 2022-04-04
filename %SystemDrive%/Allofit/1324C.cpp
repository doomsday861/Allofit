	/**
 * 1324 C Div 3
 * Kartikeya (doomsday861)
 * 
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE 
// freopen("in.txt", "r", stdin); 
// freopen("output.ans", "w", stdout); 
// #endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 testcase
  { 	
  	string s;
  	cin >> s;
  	vector<ll> pos;
  	pos.push_back(0);
  	for(ll i =0 ; i <s.length();i++)
  	{
  		if(s[i]=='R')
  			pos.push_back(i+1);
  	}
  	pos.push_back(s.length()+1);
  	ll ans=0;
  	for(ll i =0 ; i <pos.size()-1;i++)
  	{
  		ans = max(ans,pos[i+1]-pos[i]);
  	}
  	cout << ans<<endl;

}
//timee
    return 0; 
} 
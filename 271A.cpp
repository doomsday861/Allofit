	/**
 * 271A codeforces
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
// #ifndef ONLINE_JUDGE 
// freopen("in.txt", "r", stdin); 
// freopen("output.ans", "w", stdout); 
// #endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 ll n;
 cin >>n;
 n++;
  while(1)
  {
  	 string s = to_string(n);
  	bool f=0;
  	for(ll i=0;i<4;i++)
  	{
  		for(ll j=0;j<4;j++)
  		{
  			if(i==j)
  				continue;
  			if(s[i]==s[j])
  				f=1;
  		}
  	}
  	if(!f)
  	{
  		cout<<s<<endl;
  		break;
  	}
  	n++;
  }
//timee
    return 0; 
} 
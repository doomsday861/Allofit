	/**
 * AND PRODUCT HACKERRANK
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
string s;
bitset<32>a;
bitset<32>b;
void fl()
{
	for(ll i = s.length()-1; i>=0;i--)
  	{
  		if(s[i]=='1')
  			{
  				b.flip(s.length()-i-1);
  				s = b.to_string();
  				return;
  			}
  	}
}
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
  	ll l,r;
  	cin >> l>>r;
  	a = l;
  	b = r;
  //cout << a<<endl;
   s = b.to_string();
  //	 cout<<b<<endl;
  fl();
  unsigned long x = b.to_ulong();
  while(x>l)
  {
  	fl();
     x = b.to_ulong();
  }
  cout<<x<<endl;
  //cout<<b<<endl;
}
//timee
    return 0; 
} 
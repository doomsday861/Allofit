	/**
 * COINFLIP CODECHEF
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
  ll g,l,n,q;
  cin >>g;
  while(g--)
  {
  	cin >>l>>n>>q;
  	//ll count =(l==q)?n:0;
  	if(l==q||!(n&1))
  	{
  		cout<<n/2<<'\n';
  	}
  	else
  	{
  		cout<<n/2+1<<'\n';
  	}
  } 	
}
    return 0; 
} 
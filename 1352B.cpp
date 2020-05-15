	/**
 * 1352B 
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
  	ll n,k;
  	cin >> n>>k;
  	if(((n&1 && (k&1)^1) || (n<k)))
  		{
  			cout<<"NO\n";
  			continue;
  		}
  	ll ts=0;
  	if((n&1)^1 && k&1)
  	{	
  		if(n<2*k)
  		{
  			cout<<"NO\n";
  			continue;
  		}
  		else
  		{
  			cout<<"YES\n";
			for(ll i=1;i <k;i++)
  			{
  			cout<<2<<' ';
  			ts +=2;
  			}
  			cout<<n-ts<<'\n';
  			continue;
  		}
  	}
  	else
  	{	cout<<"YES\n";
  		for(ll i= 1; i < k;i++)
  		{
  			cout<<1<<' ';
  			ts +=1;
  		}
  		cout<<n-ts<<'\n';
  		continue;
  	}
}
//timee
    return 0; 
} 
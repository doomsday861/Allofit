	/**
 * 632 BB 
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
  	ll ar[n];
  	ll ar2[n];
  	  	for(ll i =0 ; i < n;i++)
  	  		cin >>ar[i];
  	  	for(ll i =0 ; i <n;i++)
  	  		cin>>ar2[i];
  	  	for(ll i =0 ; i < n;i++)
  	  	{
  	  		for(ll j =i+1;j<n;j++)
  	  		{
  	  			if(ar[j]!=ar2[j])
  	  			{
  	  				if(ar[i]==0)
  	  					continue;
  	  				if(ar[i]==1 && ar2[j]>ar[j])
  	  					ar[j]=ar2[j];
  	  				if(ar[i]==-1 && ar2[j]<ar[j])
  	  					ar[j]= ar2[j];
  	  			}
  	  		}
  	  	}
  	  	bool f=0;
  	  	for(ll i =0 ; i <n;i++)
  	  	{
  	  		cout<<ar[i]<<" ";
  	  	}	cout<<endl;
  	  	for(ll i =0 ; i<n;i++)
  	  	{
  	  		cout<<ar2[i]<<" ";
  	  	}
  	  	cout<<endl;
}
//timee
    return 0; 
} 
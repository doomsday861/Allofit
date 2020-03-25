	/**
 * 1324 A div3
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
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
 testcase
  { 	
  	ll n;
  	cin >>n;
  	ll ar[n];
  	bool e=0;
  	bool o=0;
  	bool f=1;
  	for(ll i=0;i<n;i++)
  		{
  			cin >> ar[i];
  			if(ar[i]%2==0)
  			{
  				if(o)
  					f=0;
  				e=true;
  			}
  			else
  			{
  				if(e)
  					f=0;
  				o =true;
  			}
}
if(f)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
//timee
    return 0; 
} 
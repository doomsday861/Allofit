//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
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
  { 	ll n,d;
	  cin >> n >>d;
	  ll ar[1000000];
	  for(ll i=0;i<n;i++)
	  {
		  cin>>ar[i];
	  }
	  while(d--)
	  {
		  for(ll i =0;i<n-1;i++)
		  {
			if(ar[i+1]!=0)
			 { 
				ar[i+1]--;
				ar[i]++;
				break;
			 }
		  }
	 }
	 cout <<ar[0]<<endl;
}
//timee
    return 0; 
} 

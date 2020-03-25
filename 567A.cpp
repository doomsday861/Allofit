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
ll n;
 cin >> n;
 ll ar[n];
 vector<ll> cum;
 for(ll i  =0 ; i <n; i++)
 {
	 cin >> ar[i];
 }
 cum.push_back(0);
  for(ll i =1 ;i<n;i++)
  {
	  cum.push_back(cum[i-1]+(ar[i]-ar[i-1]));
  }
//  for(ll i = 0;i<n;i++)
//  cout<< cum[i]<<" ";
//  cout<<endl;
for(ll i  =0 ; i<n;i++)
 {
	 ll mini=0,maxi=0;
	 if( i==0)
	 {
		 mini = ar[i+1]-ar[i];
		maxi = ar[n-1]-ar[i];
		cout<< mini<<" "<<maxi<<endl;
		continue;
	}
	 if(i==n-1)
	 {
		 mini = ar[n-1]-ar[n-2];
		 maxi = ar[n-1]-ar[0];
		 cout<<mini<<" "<<maxi<<endl;
		 continue;
	 }
	 if(i!=0||i!=n-1)
	 {	
		if((ar[i+1]-ar[i])<=(ar[i]-ar[i-1]))
		 mini = ar[i+1]-ar[i];
		 if((ar[i+1]-ar[i])>=(ar[i]-ar[i-1]))
		 mini = ar[i]-ar[i-1];
		if(cum[i]-cum[0]>cum[n-1]-cum[i])
		maxi = cum[i]-cum[0];
		if(cum[i]-cum[0]<=cum[n-1]-cum[i])
		maxi = cum[n-1]-cum[i];	
	}
	cout << mini<<" "<<maxi<<endl;
}
    return 0; 
} 

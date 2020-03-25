//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
// auto start = high_resolution_clock::now(); 
 testcase
  { 	
	  ll n;
	  cin >> n;
	  ll count =0;
	  ll a[n],b[n],c[n];
	  for(ll i=0;i<n;i++)
	  cin >> a[i];
	  for(ll i =0;i<n;i++)
	  cin >> b[i];
	  c[0]= a[0];
	  for(ll i=1;i<n;i++)
	  c[i] = a[i]-a[i-1];
	  for(ll i =0;i<n;i++)
	  {
		  if(b[i]>c[i])
		  continue;
		 else if(b[i]<=c[i])
		  count++;
	  }
	  cout << count <<endl;
}
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
 //        << duration.count() << "seconds" << endl; 
  
    return 0; 
} 

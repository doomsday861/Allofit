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
freopen("in.txt","r",stdin);
freopen("output.ans","w",stdout);
// auto start = high_resolution_clock::now(); 
 testcase
  { 	
	  ll m,x,y;
	  cin >> m >> x>>y;
	  ll pq = x*y;
	  ll count =0;
	  ll ar[m];
	  for(ll i =0;i<m;i++)
	  cin >> ar[i];
	  sort(ar,ar+m);
	  ll p;
	  for(ll i =1;i<m;i++)
	  {
		  p = ar[i]-ar[i-1];
		  if(p > 2*pq)
		  count += p -2*pq -1;
	  }
	  p = ar[0]-pq-1;
	  if(p>0)
	  count +=p;
	  p = 100-ar[m-1]-pq;
	  if(p>0)
	  count += p;
	  cout << count << endl;
}
//	auto stop = high_resolution_clock::now(); 
   // auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 

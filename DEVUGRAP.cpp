//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
ll T;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 //auto start = high_resolution_clock::now(); 
cin>>T;
while(T--)
  { 	
	  ll n,k;
	  cin >> n >>k;
	  ll ar[n];
	  ll count =0;
	  ll b =0;
	  for(ll i=0; i<n;i++)
	  {
		  cin >> ar[i];
		  ll a = ar[i]%k;
		  ll y = ar[i]/k;
		  y = k*(y+1);
		  if(y-ar[i] >=0)
		  b = y-ar[i];
		  else
		  b = ar[i]%k;
		  ll x = min(a,b);
		  count +=x;
	  }
		cout << count <<endl;
	  
}
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 

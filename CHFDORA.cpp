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
	  ll n,m;
	  cin >> n >> m;
	  ll ar[n][m];
	  for(ll i =0;i<n;i++)
	  {
		  for(ll j =0;j<m;j++)
		  {
			  cin >> ar[i][j];
		  }
	  }
	  ll count = n*m;
	  //ll mincount = 1;
	  for( ll i =1;i<n;i++)
	  {
		  for(ll j=1;j<m;j++)
		  {	
			  ll x = 1;
			  while(ar[i-x][j]==ar[i+x][j] && ar[i][j+x]==ar[i][j-x] && (i-x)>=0 && (i+x)<n && (j-x)>=0 && (j+x)<m)
			  {
				 count++;
				 x++;
			 } 
			}
		}
			cout << count <<endl;
	  }
	  
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//        << duration.count() << "seconds" << endl; 
  
    return 0; 
} 

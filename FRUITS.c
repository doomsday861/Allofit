//doomsday861
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
 //auto start = high_resolution_clock::now(); 
 testcase
  { 	
	  ll a,o,k;
	  cin >> a>>o>>k;
	  while(k)
	  {
		  if(a>o)
		  {
			  o++;k--;
		  }
			else
			{
				a++;
				k--;
			}
		}
		cout<<max(a,o)-min(a,o)<<endl;
			
}
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 

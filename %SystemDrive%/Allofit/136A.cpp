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
  for(ll i = 0; i < n ; i++)
  {
	  cin >> ar[i];
  }
  vector<ll>in;

	  for(ll  j = 1; j<=n;j++)
	  {
		  for(ll i = 0; i < n; i ++)
			{
		  
				if(ar[i]==j)
				{
					in.push_back(i+1);
					break;
				}
			}
		}
  for(ll i =0 ; i<n;i++)
  {
	  cout << in[i]<<" ";
  }
  cout<<endl;
	  
    return 0; 
} 

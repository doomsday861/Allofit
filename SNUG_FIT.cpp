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
 testcase
  { 	
	  ll n;
	  cin >> n;
	  ll a[n];
	  ll b[n];
	  for(ll i =0;i<n;i++)
	  cin>>a[i];
	  for(ll i =0;i<n;i++)
	  cin>>b[i];
	  /*ll min = 10000000000;
	  ll in = -1;
	  ll s=0;
	  for(ll i =0;i<n;i++)
	  {
		  for(ll j=0;j<n;j++)
		  {
			  if(b[j]==-1)
			  continue;
			  else
			  {
				  if(b[j]<min)
				  { 
					  min = b[j];
					  in = j;
				  }
			  }
		  }
		  if(a[i]>min)
		  {
			  s+=min;
		  }
		  else
		  {
			  s+=a[i];
		  }
		  b[in]= -1;
		  min = 10000000000;
		  in = -1;
	  }
	  cout<<s<<endl;*/
	  ll s=0;
	  sort(a,a+n);
	  sort(b,b+n);
	  	  for(ll i =0;i<n;i++)
			{
				if(a[i]>b[i])
				s+=b[i];
				else
				s+=a[i];
			}
			cout<<s<<endl;
}
//timee
    return 0; 
} 

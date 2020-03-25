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
flin
//timeb
 testcase
  { 	
	  ll n,k;
	  cin >> n>>k;
	  bool f[k+1]={0};
	  vector<ll>len(0,n);
	  ll ar[n];
	  ll sum = (k*(k+1))/2;
	  for(ll i =0;i<n;i++)
	  {
		  cin >> ar[i];
	  }
	  ll lent=0;
	  ll m=0;
	  for(ll i=0;i<n;i++)
	  {		ll tc=0;
			lent =0;
		  for(ll j=i;j<n;j++)
		  {		
			  if(f[ar[j]]==true)
			  continue;
			  f[ar[j]] = true;
			  tc +=ar[j];
			  lent++;
			  if(tc==sum)
			  {
				 if(lent>m)
				 m =lent;
				 lent=0;
				 tc=0;
				  break;
			  }
		  }
		  if(lent>m)
		  m=lent;
	  }
	  cout<<m<<endl;
}
//timee
    return 0; 
} 

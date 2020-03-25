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
  { 	
	  ll n,k;
	  cin>>n>>k;
//	  ll res =1;
/*	   if(n<((k*(k+1)/2)))
	  {
		  cout << -1<<endl;
		  continue;
	  }
	  */
	  vector<ll> a;
	for(ll i =1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		a.push_back(i);
		if(i*i!=n)
		a.push_back(n/i);
	}
	ll ans=-1;
	sort(a.begin(),a.end());
	for(ll i = a.size()-1;i>=0;i--)
	{
		if((n/a[i])>=((k*(k+1))/2))
		{
			ans=a[i];
			 break;
		 }
	 }
	 cout<<ans<<endl;
}
//timee
    return 0; 
} 

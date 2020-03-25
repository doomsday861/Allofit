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
 //testcase
 ll t;cin>>t;
 for(ll p =1;p<=t;p++)
  { 	
	  ll total,n;
	  cin >> total>>n;
	  vector<ll> d;
	  for(ll i =0;i<n;i++)
	  {
		  ll x;
		  cin>>x;
		  d.push_back(x);
	  }
	  sort(d.begin(),d.end(),greater<ll>());
	  ll count=0;
	  ll c=0;
	  bool f=0;
	  for(ll i =0;i<n;i++)
	  {
		  count +=d[i];
		  c++;
		  if(count>=total)
		  {		f=1;
				break;
		  }
	  }
	  if(f)
	  {
		  cout<<"Scenario #"<<p<<":\n"<<c<<"\n";
	  }
	  if(!f)
	  {
		   cout<<"Scenario #"<<p<<":\n"<<"impossible \n";
	  }
	  cout<<endl;
}
//timee
    return 0; 
} 

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
//timeb
//flin
 testcase
  { 	
	  ll n,a,b,c,d,p,q,y;
	  cin >> n >> a>>b>>c>>d>>p>>q>>y;
	  ll ar[n+1];
	  for(ll i=1;i<=n;i++)
	  cin >> ar[i];
	  ll walk = abs((ar[b]-ar[a]))*p;
	  ll train =walk+1;
		if(abs(((ar[c]-ar[a]))*p)<=y)
		{
			train = y;
			train += abs((ar[d]-ar[c]))*q;
			train += abs((ar[b]-ar[d]))*p;
		}
		else
		{
			cout<<walk<<endl;
			continue;
		}
		cout<<min(walk,train)<<endl;
	}
//timee  
return 0; 
} 

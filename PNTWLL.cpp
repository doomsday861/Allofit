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
	  ll n,m;
	  cin >> n>>m;
	  ll s[n];
	  ll c[n];
	  ll h;
	  for(ll  i= 0 ; i < n;i++)
	  {
		  cin >> s[i];
	  }

	  for(ll i  =0 ; i < n ; i++)
	  {
		  cin >> c[i];
		  h = max(c[i],h);
	  }
	ll m[h+1]={0};
	ll co=0;
	for(ll i = n-1;i>=0;i--)
	{
		if(h[i]>max)
		{
			max = h[i];
			if(m[c[i]]==0)
			{
				
		}
	}
	cout<<dis.size()<<endl;
}
}

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
  { 	ll n,k;
	  cin >> n >> k;
	  ll ar[n];
	  //ll count=0;
	  bool p=0;
	  //ll counter =0;
	  ll f[n];
	  for(ll i=0;i<n;i++)
	  {
		  cin>>ar[i];
		  f[i]=0;
	 }
	 if(k%ar[n-1]==0)
	 {
	    for(ll i =n-1;i>=0;i--)
	{
		for(ll j=0;j<=i;j++)
		{
			if(ar[i]%ar[j]==0)
			continue;
			else
			{
				p=1;
				break;
			}
		}
	}
}
if(k%ar[n-1]!=0)
p =1;
	if(!p)
	{
		cout<<"NO";
	}
	
	 if(p)
{
	 ll x =0;
	while(k>0)
	{
		for(ll i =n-1;i>=0;i--)
		{
			if((k%ar[i])==0)
			{
				x = k/ar[i];
				x -=1;
				f[i] = x;
				//cout<<k<<" ";
				k -= ar[i]*x;
				//cout<< k<<endl;
				if(k<0)
				break;
				continue;
				//cout<< k <<endl;
			}
			if((k%ar[i])!=0)
			{
				x = k/ar[i];
				x+=1;
				f[i] = x;
				//	cout<<"NOT DIVISIBLE: "<<k<<" ";
				k -= ar[i]*x;
				//cout << k <<endl;
			}
			if(k<0)
			break;
		}
	}
	cout<<"YES ";
	for(ll i =0;i<n;i++)
	cout<<f[i]<<" ";
}
	cout<<endl;
}
 }

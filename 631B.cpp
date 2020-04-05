	/**
 * CODEFORCES 631B div2
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 testcase
  { 	
  	ll n,k;
  	cin >> n>>k;
  	ll ar[n+1];
  	bool f[1000];
  	ll maxm =0;
  	memset(f,0,sizeof(f));
  	for(ll i =1 ; i  <=n;i++)
  	{
  		cin >>ar[i];
  		f[ar[i]]=true;
  		maxm = max(maxm,ar[i]);
  	}
  for(ll i =1;i<=10000;i++)
  {
  	if(!f[i])
  	{
  		k--;
  		f[i]=true;
  	}
  	if(k==0)
  		break;
  }
  ll c=0;
  for(ll i =1;i<=10000;i++)
  {
  	if(!f[i])
  	{
  		break;
  	}
  	c++;
  }
  cout<<c<<endl;
}
//timee
    return 0; 
} 
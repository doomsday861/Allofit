	/**
 * SHUFFLE CODECHEF
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
  	cin >> n >>k;
  	vector<ll> b;
  	//vector<ll> c;
  //	vector<ll> lol;
  	for(ll i =0 ; i < n;i++)
  	{
  		ll x;
  		cin >> x;
  		b.push_back(x);
  		// c.push_back(x);
  		// lol.push_back(x);
  	}
  	// sort(c.begin(),c.end());
  	bool f=0;
  	if(k==1)
  	{
  		cout<<"yes"<<endl;
  		continue;
  	}
  //	ll maxd=0;
 	for(ll i =0; i <(n);i++)
 	{
 		if(b[i%k]>b[i])
 		{
 			swap(b[i],b[i%k]);
 		}
 //		cout<<b[i]<<" ";
 	}
 //	cout<<endl;
 	for(ll i =1 ; i <k;i++)
 	{
 		if(b[i]<b[i-1])
 		{
 			f =1;
 			break;
 		}
 	}
 	for(ll i=k; i<n;i++)
 	{
 		if(b[i]<b[k-1])
 		{
 			f=1;
 			break;
 		}
 	}
 	if(f)
 		cout<<"no"<<endl;
 	else
 		cout<<"yes"<<endl;
//timee
  }
    return 0; 
} 
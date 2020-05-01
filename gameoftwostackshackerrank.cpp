	/**
 * GAME OF TWO STACKS HACKERRANK
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
  	ll a,b,t;
  	cin >>a>>b>>t;
  	vector<ll> s(2,0);
  	stack<ll> x;
  	stack<ll> y;
  	vector<ll> d1;
  	vector<ll> d2;
  	for(ll i =0 ; i < a;i++)
  	{
  		ll k;
  		cin>>k;
  		s[0] +=k;
  		d1.push_back(k);
  	}
  		for(ll i =0 ; i < b;i++)
  	{
  		ll k;
  		cin>>k;
  		s[1] +=k;
  		d2.push_back(k);
  	}
  	ll i1=0;
  	ll i2=0;
  	ll sum=0;
  	ll count=0;
  	while(i1<a && sum+d1[i1] <=t)
  	{	
  		sum +=d1[i1];
  		i1++;
  	}
  	count = i1;
  	while(i2<b && i1>=0)
  	{
  		sum +=d2[i2];
  		i2++;
  		while(sum>t && i1>0)
  		{
  			i1--;
  			sum -=d1[i1];
  		}
  		if(sum <= t && i1+i2>count)
  		{
  			count =i1+i2;
  		}
  	}
  	cout<<count<<endl;
 
}
//timee
    return 0; 
} 
	/**
 * STRNO2 AC
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
ll c=0;
ll divtwo(ll n)
{
	while(n%2==0)
  	{
  		c++;
  		n /=2;
  	}
  	return n;
}
ll factors(ll n)
{
	for(ll i =3;i<=sqrt(n);i +=2)
  	{
  		while(n%i==0)
  		{
  			c++;
  			n /=i;
  		}
  	}	
  	return n;
}
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
  	c=0;
  	ll n,k;
  	bool flag=0;
  	cin >> n>>k;
  	n = divtwo(n);
  	n = factors(n);
  	if(n>2)
  		c++;
  	if(c>=k)
  	{
  		flag =1;
  	}
  	cout<<flag<<endl;

}
//timee
    return 0; 
} 
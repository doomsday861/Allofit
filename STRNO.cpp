	/**
 * STRNO LONG APRIL 20 PARTIAL RN
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
ll cp=0;
bool p[100001];
void seieves()
{	memset(p,0,sizeof(p));
	p[2]= false;
	p[1]=true;
	for(ll i=2;i<=sqrt(50000);i++)
	{
		for(ll j=2;j*i<=50000;j++)
		{
			p[i*j]=true;
		}
	}
}
ll cntf(ll n)
{ 
	ll c=0;
for(ll i =1;i<=n;i++)
{
	if(n%i==0)
	{//	cout<<i<<" ";
		c++;
		if(!p[i])
			{	
				//cout<<i<<" ";
				cp++;
			}
	}
}
return (c);
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
seieves();
 testcase
  { 	
  	bool fl=0;
  	ll n,k;
  	cin >> n>>k;
  	if(k>n)
  	{
  		cout<<0<<endl;
  		continue;
  	}
	for(ll i =2;i<=100000;i++)
    	{
			ll f= cntf(i);
  	 		if(f==n && cp==k)
	  		{	
	  			cout<<i<<endl;
  				fl=1;
  	 			break;
   			}
  	 	cp=0;
   	}
  //	cntf(33002);
 	if(fl)
 		cout<<1<<endl;
 	else
 		cout<<0<<endl;
}
//timee
    return 0; 
} 
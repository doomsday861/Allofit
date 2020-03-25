	/**
 * PENALTY SHOT 
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
  	ll n;
  	cin >>n;
  	string s;
  	cin >> s;
  	ll a=0; ll b=0;
  	ll ac=0; ll bc=0;
  	ll acr=n; ll bcr=n;
  	ll tot = 2*n;
  	bool f=0;
  	for(ll i =0; i<s.length();i++)
  	{
  		if(s[i]=='0')
  			f=1;
  	}
  	if(!f)
  	{

  		cout<<tot<<endl;
  		continue;
  	}
  	ll i;
  	for( i= 0;  i <s.length();++i)
  	{
  		if(i&1)
  		{
  			if(s[i]=='1')
  			b++;
  			bc++;
  		}
  		else
  		{
  			if(s[i]=='1')
  			a++;
  			ac++;
  		}
  		acr = n-ac;
  		bcr = n-bc;
  	//	cout<<i<<"  th shot, a remain= "<<acr<<" b remain "<<bcr<<" a score = "<<a<<" b score "<<b<<endl;
  		if((b>(acr+a) || a>(bcr+b)))
  			{	f=0;
  				break;
  			}
  	}
  	if(!f)
  	cout<< i+1<<endl;
  	else
  	cout << i<<endl;
}
//timee
    return 0; 
} 
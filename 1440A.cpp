/**
 * 1440A 
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	int n,z,o,h;
  	cin >>n>>z>>o>>h;
  	int zc,oc;
  	zc = oc = 0;
  	for(ll i=0; i < n;i++)
  	{
  		char p;
  		cin>>p;
  		if(p=='1')
  			oc++;
  		else
  			zc++;
  	}
  	ll def = z*zc + o*oc;
  	ll ao = o*n + h*zc;
  	ll az = z*n + h*oc;
  	cout<<min(min(def,ao),az)<<endl;
}
    return 0;
}
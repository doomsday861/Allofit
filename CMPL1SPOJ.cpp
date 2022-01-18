/**
 * COMPLETE SEQUENCE SPOJ
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
vector<ll> v;
vector<ll> v1(101);
bool checker(int n)
{
	for(ll i=0; i <n-1;i++) if(v[i]!=v[i+1]) return false;
		return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {	
  	v.clear();
  	v1.clear();

  	ll s,c;
  	cin>>s>>c;
  	int n =s;
  	for(ll i=0; i < n;i++)
  	{
  		int x;
  		cin>>x;
  		v.push_back(x);
  	}
  	while(!checker(n))
  	{
  		v1[n] = v[0];
  		for(ll i=0; i < n-1;i++)
  			v[i] =v[i+1] -v[i];
  		n--;
  	}
  	int sum =0;
  	for(int i = n; i<n+c;i++)
  		v[i] = v[0];
  	for(int i=n; i <s;i++)
  		{
  			sum = accumulate(v.begin(),v.begin()+i+c,0) + v1[i+1];
  			for(int j= i+c; j>=0;j--)
  			{
  				v[j] = sum;
  				if(j>0) sum -=v[j-1];
  			}
  		}
  	for(int i=s;i<s+c;i++)
  	{
  		cout<<v[i]<<" ";
  	}
  	cout<<endl;
}
    return 0;
}
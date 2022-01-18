/**
 * 1625A
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vll bit(33,0);
void countbits(ll n)
{
	for(ll i=0; i <31;i++)
	{
		if (n & (1 << (i - 1)))
			bit[i]++;
	}
}
int main()
{

 testcase
  {
  	for(ll i=0; i <33;i++)
  	bit[i] =0;	
  	ll n,l;
  	cin>>n>>l;
  	vector<ll> v(n);
  	for0(i,n)
  	{
  		cin>>v[i];
  		countbits(v[i]);
  	}
  	string ans="";
  	// for(auto x:bit)
  	// 	cout<<x;
  	for1(i,l)
  	{
  		//cout<<bit[i]<<" ";
  		if(bit[i]>(n/2))
  			{
  				//cout<<bit[i]<<" "<<n/2<<endl;
  				ans+='1';
  			}
  		else 
  			ans+='0';
  	}
  	reverse(ans.begin(),ans.end());
  	ll rans = stoi(ans,0,2);
  	cout<<rans<<endl;
}
    return 0;
}
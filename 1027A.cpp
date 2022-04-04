/**
 * 1027A
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
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run
    
 testcase
  {
  	ll n;
  	cin>>n;
  	string s;
  	cin>>s;
  	bool f=0;
  	if(n&1)
  	{
  		for0(i,n/2)
  		{
  			//cout<<n-i-1<<endl;
  			if(abs(s[n-i-1]-s[i])!=0 && abs(s[n-i-1]-s[i])!=2)
  			{
  				f=1;
  				break;
  			}
  		}
   	}
   	else
   	{
   		for0(i,n/2+1)
   		{
   			//cout<<n-i-1<<endl;
   			if(abs(s[n-i-1]-s[i])!=0 && abs(s[n-i-1]-s[i])!=2)
   			{
   				//cout<<abs(s[n-i-1]-s[i])<<endl;
   				f=1;
   				break;
   			}
   		}
   	}
  	if(!f)
  	{
  		cout<<"YES"<<endl;
  	}
  	else
  		cout<<"NO"<<endl;
}
   

    return 0;
}
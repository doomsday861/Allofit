/**
 * 349A
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
int main()
{
    run

 ll n;
 cin>>n;
 vll v(n);
 bool f=0;
 ll tc=0;
 ll fc=0;
 for0(i,n)
 {
 	ll x;
 	cin>>x;
 	if(x==25)
 		{
 			tc++;
 		}
 	else if(x==50)
 	{
 		if(tc>=1)
      {
         tc--;
         fc++;
      }
 		else
      {
         cout<<"NO";
         return 0;
      }
 	}
 	else if(x==100)
 	{

 		if(tc>=1 && fc>=1)
      {
         tc--;
         fc--;
      }
      else if(fc==0 && tc>=3)
      {
         tc -=3;
      }
      else
      {
         cout<<"NO";
         return 0;
      }
 	}
 }
 cout<<"YES";
 return 0;
}
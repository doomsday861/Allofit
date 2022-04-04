/**
 * relevel 1
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
ll nextPowerOf2(ll n)
{
ll count = 0;
 
if (n && !(n & (n - 1)))
    return n;
 
while( n != 0)
{
    n >>= 1;
    count += 1;
}
 
return 1 << count;
}
int main()
{
    run

   ll n;
   cin>>n;
   vll v(n);
   for0(i,n)
   cin>>v[i];

   ll maxd=0;
   for0(i,n-1)
   {
   	if(v[i+1]>v[i])
   	{
   		//cout<<0<<" ";
   		continue;
   	}
   	else
   	{
   		maxd = max(maxd,v[i]-v[i+1]);
   		//cout<<v[i]-v[i+1]<<" ";
   		v[i+1] = v[i];
   	}
   }
   //cout<<endl;
   for(int i=0;i<33;i++)
   {
   		if(maxd<=(pow(2,i)-1))
   		{
   			cout<<i<<endl;
   			return 0;
   		}
   }

    return 0;
}
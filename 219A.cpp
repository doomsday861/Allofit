/**
 * 219A
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
   	string s;
   	cin>>s;
   	ll ar[26]={0};
   	for(auto x: s)
   		ar[x-'a']++;
   	bool f=0;
   	for0(i,26)
   	{
   		if(ar[i]>0)
   			if(ar[i]%n!=0)
   				f=1;
   	}
   if(f)
   {
   	cout<<-1<<endl;
   	return 0;
   }
   string ans="";
   for0(i,26)
   {
   		if(ar[i]>0)
   		{
   			for1(j,ar[i]/n)
   			{
   				ans +=char(i+'a');
   			}

   		}
   }
   string rans="";
  for0(i,n)
 	rans +=ans;

 cout<<rans;


    return 0;
}
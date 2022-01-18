/**
 * 205A
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
   for0(i,n) cin>>v[i];
   ll mini=INT_MAX;
   ll ansi=0;
   ll counter=0;
   for0(i,n)
   {
   	if(v[i] < mini)
   	{
   		mini= v[i];
   		ansi=i+1;
   	}
   }
   for0(i,n)
   {
   	if(v[i]==mini)
   		counter++;
   }

   if(counter>1)
   	cout<<"Still Rozdil";
   else
   	cout<<ansi;
    return 0;
}
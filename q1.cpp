/**
 * q1
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

    
 ll n;
 cin>>n;
 double ar[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>ar[i];
 }
   sort(ar,ar+n);
   double x = ceil(ar[0]+ar[1])/2;
double ans =x;
 for(ll i=2;i<n;i++)
 {
 	ans = ceil(x+ar[i])/2;
 	x = ans;
 }
 ll rans = x;
 cout<<rans<<endl;

    return 0;
}
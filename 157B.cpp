/**
 * 157B
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
using namespace std;
int main()
{
    run

ll n;
cin>>n;
vll v(n);
for0(i,n){
 cin>>v[i];
 v[i] *=v[i];
}
sort(v.begin(),v.end());
double sum=0;
double os =0;
double es =0;
for0(i,n)
{
	if(i&1)
		os +=v[i];
	else
		es +=v[i];
}
// cout<<os<<" "<<es<<endl;
 sum = (os-es);
// if(n&1)
// sum +=v[n-1];
if(sum < 0)
sum *=-1;
//cout<<sum<<endl;
sum*=3.1415926536;
cout<<setprecision(11)<<sum;
   

    return 0;
}
/**
 * 149A
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

ll k;
cin>>k;
ll ans=0;
vll v(12);
for0(i,12) cin>>v[i];

sort(v.begin(),v.end(),greater<ll>());
ll sum=0;
ll i=0;
while(sum <k && i<12)
{
	sum +=v[i];
	i++;
}
if(sum < k)
cout<<-1;
else
cout<<i<<endl;


    return 0;
}
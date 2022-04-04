/**
 * 1365C
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin >> n;
map<ll,ll> mp;
map<ll,ll> mp2;
vector<ll> v1(n);
vector<ll> v2(n);
map<ll,ll> mp3;
ll fr[n]={0};
for(ll i=0; i < n;i++)
{
    cin>>v1[i];
    mp[v1[i]] = i ;
}
for(ll i=0; i <n;i++)
{
    cin>>v2[i];
    mp2[v2[i]] = i;
}
for(ll i=1; i <=n;i++)
{
       mp3[i] = (mp[i]- mp2[i] + n)%(n);
       fr[mp3[i]]++;
}
ll ans=0;
for(auto x: fr)
ans = max(x,ans);
cout<<ans;
  
}
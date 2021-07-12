/**
 * abc206_c
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
cin>>n;
vector<ll> v(n);
map<ll,ll> mp;
for(ll i=0; i <n;i++)
{
    cin >>v[i];
    mp[v[i]]++;
}
ll ans=0;
for(ll i=0; i<n;i++)
{
    ans +=n- i -mp[v[i]];
    mp[v[i]]--;
}
cout<<ans;
    return 0;
}
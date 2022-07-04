/**
 * atcoder 254
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
ll n,k;
cin>>n>>k;
vll v(n);
vll s(n);
for0(i,n)
{
    cin>>v[i];
    s[i] = v[i];
}
sort(bend(s));
vector<vll>f(k);
for(int i=0;i<n;i++)
{
    f[i%k].pb(v[i]);
}
for(int i=0; i <k;i++)
sort(bend(f[i]),greater<ll>());
for(int i=0;i<n;i++)
{
   v[i] = f[i%k][f[i%k].size()-1];
   f[i%k].pop_back();
}
for0(i,n)
{
    if(v[i]!=s[i])
    {
        cout<<"No";
        return 0;
    }
}
    cout<<"Yes"<<endl;
    return 0;
}

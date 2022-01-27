/**
 * roundA2019 a
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
    ll counter=1;
testcase{
    
    ll n,p;
    cin>>n>>p;
    vll v(n);
    map<ll,ll> mp;
    bool f=0;
    for0(i,n){
     cin>>v[i];
     mp[v[i]]++;
     if(mp[v[i]]==p)
        f=1;
    }
    sort(v.begin(),v.end());
    ll cur =0;
    ll l =0;
    ll r= p-1;
    for0(i,r)
    {
        cur += v[r]-v[i];
    }
    ll mini = cur;
    for0(i,n-p)
    {
        cur -= v[++r] - v[l++];
        cur += p*(v[r] - v[r-1]);
        mini = min(cur,mini);
    }
    ll ans = mini;
    
    
    cout<<"Case #"<<counter<<": "<<ans<<endl;
    counter++;
}

    return 0;
}

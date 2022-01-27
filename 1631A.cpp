/**
 * 1631A
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
ll maxindex(vector<ll> v)
{
    ll ans=0;
    ll maxi=0;
    for0(i,v.size())
    {
        if(v[i]>maxi)
        {
            maxi=v[i];
            ans =i;
        }
    }
    return ans;
}
int main()
{
    run
testcase{
    
    ll n;
    cin>>n;
    vll v(n);
    vll v1(n);
    for0(i,n) cin>>v[i];
    for0(i,n) cin>>v1[i];
    // sort(v.begin()v.end(),greater<ll>());
    // sort(v1.begin(),v1.end(),greater<ll>());
    for0(i,n)
    {
        if(v1[i]>v[i])
            swap(v1[i],v[i]);
    }
    ll one = *max_element(v.begin(),v.end());
    ll two = *max_element(v1.begin(),v1.end());
    cout<<one*two<<endl;    
}

    return 0;
}

/**
 * 1537 C
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
testcase{
    ll n;
    cin>>n;
    vll v(n);
    for0(i,n)
    cin >>v[i];
    sort(bend(v));
    
    ll maxdif = INT_MAX;
    ll maxi =0;
    if(n==2)
    {
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
        continue;
    }
    for0(i,n-1)
    {
        if(v[i+1]-v[i] < maxdif)
            {
                maxdif = v[i+1]-v[i];
                maxi =i;
            }
    }
    for(ll i = maxi+1;i<n;i++)
        cout<<v[i]<<" ";
    for(ll i= 0; i<=maxi;i++)
        cout<<v[i]<<" ";
        cout<<endl;
    
}

    return 0;
}

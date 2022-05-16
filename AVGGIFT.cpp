/**
 * AVGGIFT
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
    ll n,x;
    cin>>n>>x;
    vll v(n);
    bool f=0;
    for0(i,n)
    {
        cin>>v[i];
        if(v[i]==x)
            f=1;
    }
    if(f)
    {
        cout<<"YES"<<endl;
        continue;
    }    
    sort(bend(v));
    if(v[0]>x || v[n-1]<x)
    {
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES"<<endl;
    
    
}

    return 0;
}

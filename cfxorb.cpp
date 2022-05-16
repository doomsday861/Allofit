/**
 * cfxorb
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
    vll v(n);
    for0(i,n)
    cin>>v[i];
    
    ll x;
    cin>>x;
    
    ll oc,zc;
    oc=zc=0;
    vll v1(32,0);
    for(int i=0;i<32;i++)
    {
        if(x>>(i)&1)
            v1[i] =1;
    }
    
}

    return 0;
}

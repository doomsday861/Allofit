/**
 * ANDEQ
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
    ll total = -1;
    for0(i,n)
    {
        cin>>v[i];
        total &=v[i];
    }
    ll cnt=0;
    ll cur = -1;
    for0(i,n)
    {
        cur &=v[i];
        if(cur==total)
        {
            cnt++;
            cur = -1;
        }
    }
    cout<<n-cnt<<'\n';
}

    return 0;
}

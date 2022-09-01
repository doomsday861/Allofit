/**
 * maxsubarraysum2cses
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
    ll n,a,b;
    cin>>n>>a>>b;
    vll v(n);
    for0(i,n) cin>>v[i];
    ll st=0;
    ll en =0;
    ll ts =0;
    ll curmax = INT_MIN;
    while(en<n)
    {
        if((en-st+1)<a and en < n)ts+=v[en];
        if((en-st+1)>b)ts-=v[st];
        cout<<st<<" "<<en<<" "<<ts<<endl;
        curmax = max(curmax,ts);
        st++,en++;
    }
    cout<<curmax;

    return 0;
    
}

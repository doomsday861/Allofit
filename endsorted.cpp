/**
 * endsorted
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
    ll startind =-1;
    ll endind = -1;
    for0(i,n)
    {
        cin>>v[i];
        if(v[i]==1)
            startind = i+1;
        if(v[i]==n)
            endind = i+1;
    }
    if(startind==1 and endind == n)
    {
        cout<<0<<endl;
        continue;
    }
    if(n==2)
    {
        cout<<1<<endl;
        continue;
    }
    ll ans = (startind) + (n-endind);
    if(startind > endind)
    {
        ans-=2;
    }
    else
        ans-=1;
    cout<<ans<<endl;
    
}

    return 0;
}

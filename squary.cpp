/**
 * squary
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
    ll n,k;
    cin>>n>>k;
    vll v(n);
    ll s1=0,s2=0;
    for0(i,n)
    {
        cin>>v[i];
        s1 +=pow(v[i],2);
        s2 +=v[i];
    }
    ll sum2=s2;
    s2 = pow(s2,2);
    if(s1==s2)
    {
        cout<<0<<endl;
        continue;
    }
    ll low = -1e18;
    ll high = 1e18;
    while(low <=high)
    {
        ll mid = low +(high-low)/2;
        if(pow(sum2+mid,2) >
    }
}

    return 0;
}

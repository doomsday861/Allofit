/**
 * DOMINANT2
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
    map<ll,ll>mp;
    vll v(n);
    ll maxi =0;
    for0(i,n)
    {
        cin>>v[i];
        mp[v[i]]++;
        maxi = max(mp[v[i]],maxi);
    }
    ll cnt=0;
    for(auto x:mp)
    {
        if(x.se==maxi)
            cnt++;
    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    
}

    return 0;
}

/**
 * the magic
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
    vll v(n+1);
    map<ll,ll>mp;
    ll maxi =1;
    for1(i,n)
    {
        cin>>v[i];
        mp[v[i]]++;
        maxi = max(maxi,v[i]);
    }
    ll ans =INT_MAX;
    for1(i,maxi)
    {
        ll cnt = 0;
        if(mp[i]==0)
            continue;
        ll days =0;
        ll j =1;
        for(j=1; j <=n;j++)
        {
            if(v[j]!=i)
                break;
        }
        if(j==(n+1))
        {
            ans = 0;
            break;
        }
        while(j<=n)
        {
            if(v[j]!=i)
            {
                days++;
                j+=k;
            }
            else
            j++;
        }
        ans = min(ans,days);    
    }
    cout<<ans<<endl;
    }

    return 0;
}

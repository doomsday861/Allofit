/**
 * 1631C
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
map<ll,vector<pair<ll,ll>>> mp;
void prepare()
{
    for(ll i=0; i <=pow(2,16);i++)
    {
        for(ll j=0; j <= pow(2,16);j++)
        {
            // mp[j&i].pb({i,j});
        }
    }
}
int main()
{
    run
    ll n,k;
    cin>>n>>k;
    prepare();
    

    return 0;
}
